/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V4.12a.
*        Compiled Jan  2 2008, 17:25:57
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: ZOOMIN
* Dimensions:  16 * 16
* NumColors:   0
*
**********************************************************************
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned char acZOOMIN[] = {
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x30, 0xCE, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0xC6, 0xC7, 0xC6, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 
        0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE, 
        0x00, 0x00, 0xCE, 0xC6, 0xC7, 0xC6,
  0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0xC6, 0xC7, 0xC6, 0x00, 0x00, 0xCE, 
        0x00, 0x00, 0xCE, 0x00, 0x00, 0xCE
};

GUI_CONST_STORAGE GUI_BITMAP bmZOOMIN = {
  16, /* XSize */
  16, /* YSize */
  48, /* BytesPerLine */
  24, /* BitsPerPixel */
  (unsigned char *)acZOOMIN,  /* Pointer to picture data */
  NULL  /* Pointer to palette */
 ,GUI_DRAW_BMP24
};

/* *** End of file *** */
