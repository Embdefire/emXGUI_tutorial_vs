#ifndef	__GUI_DRV_CFG_H__
#define	__GUI_DRV_CFG_H__


/*============================================================================*/
#define	G2D_EN                          0
#define	GUI_KEYBOARD_EN                 0
#define	GUI_MOUSE_EN                    1
#define	GUI_TOUCHSCREEN_EN              0

#define	GUI_TOUCHSCREEN_CALIBRATE       0

#define	FONT_XFT_EN		1
#define	FONT_TTF_EN		0

#define	FRAMEBUFFER_EN	1

#define	RECT_LL_SLOT_NUM	512

/*============================================================================*/

#ifndef	MIN
#define	MIN(a,b)	(((a)<(b))?(a):(b))
#endif

#ifndef	MAX
#define	MAX(a,b)	(((a)>(b))?(a):(b))
#endif


/*============================================================================*/


//#define	LCD_FORMAT	COLOR_FORMAT_RGB565
#define	LCD_FORMAT	COLOR_FORMAT_XRGB8888

#define	LCD_XSIZE	    800
#define	LCD_YSIZE	    480
#define LCD_FRAME_RATE	60
#define	LCD_ROTATE      ROTATE_0


/*============================================================================*/
#if	(LCD_FORMAT==COLOR_FORMAT_RGB565)

#define	LCD_COLOR	    U16
#define	LCD_BUF_SIZE	(LCD_XSIZE*LCD_YSIZE*2)

#endif

////////

#if	(LCD_FORMAT==COLOR_FORMAT_XRGB8888)

#define	LCD_COLOR       U32
#define	LCD_BUF_SIZE	(LCD_XSIZE*LCD_YSIZE*4)

#endif

/*============================================================================*/
/*============================================================================*/
/*============================================================================*/

#endif	/*__GUI_DRV_CFG_H__*/
