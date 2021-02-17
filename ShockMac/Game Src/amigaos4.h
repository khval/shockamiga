
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/intuition.h>

// -----------------------------------------------------------------------------------------------------
// Trying to define stuff maybe std to MacOS, but AmigaOS does not have....
// ------------------------------------------------------------------------------------------------------


typedef unsigned int uint;
typedef unsigned short ushort;
typedef int errtype;		// don't know if its correct.


typedef struct Window * WindowPtr;
typedef uint32_t MenuHandle;		//  I'm thinking emulate this in a array
typedef uint32_t RgnHandle;		//  I'm thinking emulate this in a array
typedef uint32_t Handle;			//  I'm thinking emulate this in a array
typedef uint32_t CursHandle;		//  I'm thinking emulate this in a array

typedef struct
{
	void *thePort;
} QDGlobals;

extern void uiFlush();

typedef int TimerUPP;


// gr short for graphics, i guess.

// draw bitmap



struct xy 	// not sure about the name... 
{
	int x;
	int y;
};

typedef struct 
{
	struct xy  ul;
	struct xy  lr;
} LGRect;	

typedef struct
{
	int xxxx;
} Rect;

extern struct xy MakePoint(int x, int y);

static unsigned int RectWidth(LGRect *r)
{
	return r->lr.x - r->ul.x + 1;
}

static unsigned int RectHeight(LGRect *r)
{
	return r->lr.y - r->ul.y + 1;
}

typedef struct 
{
	int abs_x;
	int abs_y;		// maybe abs is for absolute position
	LGRect *r;
} LGRegion;		// don't know if its correct.


typedef struct 
{
	short x;
	short y;
} LGPoint;

typedef bool Boolean;
typedef FILE FSSpec;

typedef int snd_digi_parms;		// most likely incorrect
typedef struct
{
	uint32_t subtype;
} uiEvent;				// most likely incorrect

typedef int LGCursor;			// most likely incorrect

//typedef int physics_handle;

typedef void * PQueue;			// most likely incorrect
typedef unsigned int uiSlab;		// most likely incorrect

typedef struct Process TMTask;		// guess, we need a Amiga process here.

//typedef uint32_t ColorSpec;
//typedef char *BitMap;

typedef int RndStream;

typedef void * Ptr;

typedef char *GrafPtr;
typedef void *GrafPort;
typedef void *CGrafPort;
typedef void *CGrafPtr;

typedef int PixMapHandle;
typedef int CTabHandle;

typedef uint32_t OSErr;
typedef uint32_t ResType;


#define RndRange(dummy,min,max) ((rand()%(max-min))+min)


static bool RECT_TEST_PT(LGRect *r, LGPoint *p)
{
	if ( p->x < r->ul.x ) return false;
	if ( p->x > r->lr.x ) return false;
	if ( p->y < r->ul.y ) return false;
	if ( p->y > r->lr.y ) return false;
	return true;
}

static void uiPopSlabCursor(void *param)
{
	printf("%s:%d:%s(...)\n",__FILE__,__LINE__,__FUNCTION__);
}

static void mouse_put_xy( int x, int y)
{
	printf("%s:%d:%s(%d,%d)\n",__FILE__,__LINE__,__FUNCTION__,x,y);
}

static void DisposePtr( void *ptr )
{
	printf("%s:%d:%s(%08x)\n",__FILE__,__LINE__,__FUNCTION__,ptr);
}

static void uiSetCursor()
{
	printf("%s:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void ss_point_convert( short *x, short *y, bool opt)
{
	printf("%d:%d:%s(%lf,%lf,%s)\n",__FILE__,__LINE__,__FUNCTION__,x,y,opt?"True":"False");
}

#define OK true

#define SND_DEF_PAN 1

enum
{
	nil
};

enum
{
	ERR_NOEFFECT = 1,
	ERR_RANGE,
	ERR_FOPEN 
};

enum
{
	MOUSE_LDOWN = 1,
	UI_MOUSE_LDOUBLE = 2,
	UI_EVENT_MOUSE = 4,
	UI_EVENT_MOUSE_MOVE = 8
};

enum
{
	CURSOR_DRAW = 1
};

// the next 2 defines are used inside structs.

#define UIEVFRONT	
#define UIEVBACK(size)

extern void region_abs_rect( LGRegion *, LGRect *, LGRect *);

typedef int grs_font;

extern uint32_t MouseLock;
extern void *CurrentCursor;

extern LGPoint LastCursorPos;



#define ok

typedef struct
{
	void *dummy;
} g3s_phandle;

typedef struct
{
	void *dummy;
} g3s_vector;



typedef struct
{
	void (*func) (int,int,int,int);
} _tmp_LastCursor ;

extern _tmp_LastCursor *LastCursor;

#include "files.h"

typedef struct 
{
	int w;
	int h;
	uchar *bits;
} grs_bitmap;		// don't know if its correct.

typedef struct
{
	grs_bitmap bm;
	int _offscreen_mfd;
	int _fullscreen_mfd;
	int inv_view360_canvas;
} grs_canvas;

extern grs_canvas *CursorCanvas;

void g3_set_vtext(char , grs_bitmap *);

extern void gr_get_pal( short colorFrom, short colorTo, uchar *loadPalette);
extern void gr_set_pal( short colorFrom, short colorTo, uchar *savePalette);
extern void gr_bitmap(grs_bitmap *bmp, int x, int y);
extern void gr_set_light_tab( uchar *bw_shading_table);
extern void uiHideMouse(LGRect *r);
extern void uiShowMouse(LGRect *r);
extern grs_canvas*grd_screen_canvas;
extern void gr_push_canvas( grs_canvas* );
extern void gr_safe_set_cliprect( int x0,int y0,int x1,int y1 );
extern void gr_set_font(grs_font *font);
extern void gr_string_size( const char *txt ,short *x,short *y);
extern int gr_string_width(const char *txt);
extern void gr_set_fcolor(uint32_t color);
extern void gr_rect(int,int,int,int);
extern void gr_box(int,int,int,int);
extern void gr_pop_canvas(void);

