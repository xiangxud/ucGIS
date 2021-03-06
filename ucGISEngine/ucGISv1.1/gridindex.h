#ifndef _GRIDINDEX_H_INCLUDED
#define _GRIDINDEX_H_INCLUDED
#ifdef  GRIDINDEX_GLOBALES
#define GRIDINDEX_EXT 
#else 
#define GRIDINDEX_EXT  extern
#endif
#include "CoorTrans.h"

typedef struct tagINDEX 
{
//	int ATTKey;
	INT32S arrayIndex;
    INT32S layeroffset;
	INT32S ClassCode;
	INT32S ilayer;
	INT32S offset;
}INDEX;
typedef struct  
{
	int arrayIndex;
	int offset;//?ļ???ƫ????
}INDEXINDEX;

typedef struct tagDrawRect 
{ 
  INT32S left;
  INT32S right;
  INT32S top;
  INT32S bottom;

}GRIDDrawRect;

typedef struct{
   mapMAPRECTSTRCT mapExtentRect;
   GUI_ARRAY   indexvector;
   INT32U indexNums;
   INT32U nGridNo;
}GridIndex;

typedef struct{
   mapMAPRECTSTRCT mapExtentRect;
   GUI_ARRAY   indexindexvector;
   INT32U nGridindexNums;
   INT32U nGridIndexNo;
}GridIndexIndex;

GRIDINDEX_EXT void GridIndex_Realease(GridIndex *pgridIndex);
GRIDINDEX_EXT BOOLEAN GridIsInView(MapCoorTrans *pcoortrans,GridIndex* pgridIndex);
GRIDINDEX_EXT void GridIndex_ReadFromFile(FILE *fp,GridIndex *pgridIndex);
GRIDINDEX_EXT void GridIndex_ReadFromFileOffSet(FILE *fp,GridIndex *pgridIndex,int offset);
GRIDINDEX_EXT int GridIndex_GetGridCode(int Tcols,int row,int col);
GRIDINDEX_EXT void GridIndexIndex_Realease(GridIndexIndex *pgridIndexIndex);
GRIDINDEX_EXT BOOLEAN GridIndexIsInView(MapCoorTrans *pcoortrans,GridIndexIndex* pgridIndexIndex);
GRIDINDEX_EXT void GridIndexIndex_ReadFromFile(FILE *fp,GridIndexIndex *pgridIndexIndex);

//	void Draw(HDC hDC);
#endif