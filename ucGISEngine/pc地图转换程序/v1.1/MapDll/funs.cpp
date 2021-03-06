#include "stdafx.h"	
#include <windows.h>
#include "limits.h"
#include "draw.h"

bool mapPtInRect(const mapRECT* r,mapMAPPOINTSTRUCT* point)
{
	return (point->x>r->left)&&(point->y<r->top)&&(point->x<r->right)&&(point->y>r->bottom);
}


BOOL G_PtInPolygon(mapMAPPOINTSTRUCT *rgpts, WORD wnumpts, mapMAPPOINTSTRUCT ptTest,

				   mapRECT *prbound) ;

BOOL G_PtInPolyRect(mapMAPPOINTSTRUCT *rgpts, WORD wnumpts, mapMAPPOINTSTRUCT ptTest,

					mapRECT *prbound) ;

BOOL Intersect(mapMAPPOINTSTRUCT p1, mapMAPPOINTSTRUCT p2, mapMAPPOINTSTRUCT p3, mapMAPPOINTSTRUCT p4) ;

int  CCW(mapMAPPOINTSTRUCT p0, mapMAPPOINTSTRUCT p1, mapMAPPOINTSTRUCT p2) ;

/*************************************************************************

* FUNCTION:   G_PtInPolygon
*
* PURPOSE
* This routine determines if the mapMAPPOINTSTRUCT passed is in the polygon. It uses

* the classical polygon hit-testing algorithm: a horizontal ray starting

* at the mapMAPPOINTSTRUCT is extended infinitely rightwards and the number of
* polygon edges that intersect the ray are counted. If the number is odd,

* the mapMAPPOINTSTRUCT is inside the polygon.
*
* RETURN VALUE
* (BOOL) TRUE if the mapMAPPOINTSTRUCT is inside the polygon, FALSE if not.
*************************************************************************/ 

BOOL G_PtInPolygon(mapMAPPOINTSTRUCT *rgpts, WORD wnumpts, mapMAPPOINTSTRUCT ptTest,

				   mapRECT *prbound)

{

	mapRECT   r ;
	mapMAPPOINTSTRUCT  *ppt ;
	WORD   i ;
	mapMAPPOINTSTRUCT  pt1, pt2 ;
	WORD   wnumintsct = 0 ;

	memset(&r,0,sizeof(r));

	if (!G_PtInPolyRect(rgpts,wnumpts,ptTest,prbound))

		return FALSE ;

	pt1 = pt2 = ptTest ;
	pt2.x = r.right + 50 ;

	// Now go through each of the lines in the polygon and see if it
	// intersects
	for (i = 0, ppt = rgpts ; i < wnumpts-1 ; i++, ppt++)
	{
		if (Intersect(ptTest, pt2, *ppt, *(ppt+1)))
			wnumintsct++ ;
	}

	// And the last line
	if (Intersect(ptTest, pt2, *ppt, *rgpts))
		wnumintsct++ ;

	return (wnumintsct&1) ;

}

/*************************************************************************

* FUNCTION:   G_PtInPolyRect
*
* PURPOSE
* This routine determines if a mapMAPPOINTSTRUCT is within the smallest rectangle
* that encloses a polygon.
*
* RETURN VALUE
* (BOOL) TRUE or FALSE depending on whether the mapMAPPOINTSTRUCT is in the rect or

* not.
*************************************************************************/ 

BOOL  G_PtInPolyRect(mapMAPPOINTSTRUCT *rgpts, WORD wnumpts, mapMAPPOINTSTRUCT ptTest,

					 mapRECT *prbound)

{

	mapRECT r ;
	// If a bounding rect has not been passed in, calculate it
	if (prbound)

		r = *prbound ;

	else
	{

		float   xmin, xmax, ymin, ymax ;
		mapMAPPOINTSTRUCT *ppt ;
		WORD  i ;

		xmin = xmax = rgpts[0].x ;
		ymin = ymax = rgpts[0].y ;

		for (i=0, ppt = rgpts ; i < wnumpts ; i++, ppt++)
		{
			if (ppt->x < xmin)
				xmin = ppt->x ;
			if (ppt->x > xmax)
				xmax = ppt->x ;
			if (ppt->y < ymin)
				ymin = ppt->y ;
			if (ppt->y > ymax)
				ymax = ppt->y ;
		}
		r.left = xmin;
		r.top = ymax;
		r.right = xmax;
		r.bottom = ymin;
//		SetRect(&r, xmin, ymin, xmax, ymax) ;  //?????

	}
	return mapPtInRect(&r,&ptTest);

}

/*************************************************************************
* FUNCTION:   Intersect
*
* PURPOSE
* Given two line segments, determine if they intersect.
*
* RETURN VALUE
* TRUE if they intersect, FALSE if not.
*************************************************************************/ 

BOOL Intersect(mapMAPPOINTSTRUCT p1, mapMAPPOINTSTRUCT p2, mapMAPPOINTSTRUCT p3, mapMAPPOINTSTRUCT p4)
{

	return ((( CCW(p1, p2, p3) * CCW(p1, p2, p4)) <= 0)

		&& (( CCW(p3, p4, p1) * CCW(p3, p4, p2)  <= 0) )) ;

}

/*************************************************************************

* FUNCTION:   CCW (CounterClockWise)
*
* PURPOSE
* Determines, given three mapMAPPOINTSTRUCTs, if when travelling from the first to
* the second to the third, we travel in a counterclockwise direction.
*
* RETURN VALUE
* (int) 1 if the movement is in a counterclockwise direction, -1 if
* not.
*************************************************************************/ 

int CCW(mapMAPPOINTSTRUCT p0, mapMAPPOINTSTRUCT p1, mapMAPPOINTSTRUCT p2)

{

	float dx1, dx2 ;
	float dy1, dy2 ;

	dx1 = p1.x - p0.x ; dx2 = p2.x - p0.x ;
	dy1 = p1.y - p0.y ; dy2 = p2.y - p0.y ;

	/* This is basically a slope comparison: we don't do divisions because

	* of divide by zero possibilities with pure horizontal and pure
	* vertical lines.
	*/ 

	return ((dx1 * dy2 > dy1 * dx2) ? 1 : -1) ;

}