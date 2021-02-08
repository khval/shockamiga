
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <proto/exec.h>
#include <proto/dos.h>

// -----------------------------------------------------------------------------------------------------
// Trying to define stuff maybe std to MacOS, but AmigaOS does not have....
// ------------------------------------------------------------------------------------------------------

typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char ubyte;
typedef signed char byte;
typedef int errtype;		// don't know if its correct.
typedef double fix;		// looks like float or double, maybe correct
typedef double fixang;	// looks like float or double, maybe correct

typedef int Ref;
typedef int Id;

typedef struct 
{
	int w;
	int h;
	int bits;
} grs_bitmap;		// don't know if its correct.

typedef struct 
{
	struct 
	{
		int x, y;
	} ul;

	struct 
	{
		int x, y;
	} lr;

} LGRect;		// don't know if its correct.


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
typedef int uiEvent;				// most likely incorrect
typedef int RefTable;				// most likely incorrect
typedef int LGCursor;			// most likely incorrect

typedef int physics_handle;

typedef void * PQueue;			// most likely incorrect
typedef unsigned int uiSlab;		// most likely incorrect

typedef struct
{
	double X;
	double Y;
	double Z;
	double X_dot;
	double Y_dot;
	double Z_dot;
} State;		// most likely incorrect

typedef struct
{
	int cyber_space;
} Pelvis;				// most likely incorrect

typedef int TerrainData;			// most likely incorrect

typedef struct
{
	int cyber_space;
	int size;
} Robot;				// most likely incorrect


typedef int RndStream;
typedef int grs_canvas;
typedef void * Ptr;

#warning ok

static fix fix_make(short value,short shift)		// this might be bullshit...
{
	// assuming value can max be 256, when all bit set it should be 1. (range 1.0000000 to 0.00390625.)

	return ( (fix) value / 256.0f ) * (fix) (1L<<(int)shift);
}


#define RndRange(dummy,min,max) ((rand()%(max-min))+min)

#define EDMS_get_state

#define fix_mul(a,b) ((a)*(b))
#define fix_div(a,b) ((a)/(b))
#define fix_atan2 atan2
#define FIXANG_PI 3.14159265358979323846f

#define fixrad_to_fixang(x) (x * 180.0f / FIXANG_PI)

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

static bool RECT_TEST_PT(LGRect *r, LGPoint &p)
{
	if ( p.x < r -> ul.x) return false;
	if ( p.x > r -> lr.x) return false;
	if ( p.y < r -> ul.y) return false;
	if ( p.y > r -> lr.y) return false;
	return true;
}

static void uiPopSlabCursor(void *)
{
	printf("%s:%d:%s(...)\n",__FILE__,__LINE__,__FUNCTION__);
}

static void mouse_put_xy( int x, int y)
{
	printf("%s:%d:%s(%d,%d)\n",__FILE__,__LINE__,__FUNCTION__,x,y);
}

static void uiSetCursor()
{
	printf("%s:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void ss_point_convert( short *x, short *y, bool opt)
{
	printf("%d:%d:%s(%lf,%lf,%s)\n",__FILE__,__LINE__,__FUNCTION__,x,y,opt?"True":"False");
}

static void gr_set_light_tab( uchar *bw_shading_table)
{
	printf("%s:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void EDMS_get_pelvis_parameters( uint getParam,void *param)
{
	printf("%d:%d:%s(%d,%08x)\n",__FILE__,__LINE__,__FUNCTION__,getParam, param);
}

static void EDMS_set_pelvis_parameters( uint getParam,void *param)
{
	printf("%d:%d:%s(%d,%08x)\n",__FILE__,__LINE__,__FUNCTION__,getParam, param);
}

static void uiHideMouse(LGRect *r)
{
	printf("%d:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void uiShowMouse(LGRect *r)
{
	printf("%d:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void RefUnlock(Ref ref)
{
	printf("%d:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

static void DisposePtr(Ptr ptr)
{
	printf("%d:%d:%s()\n",__FILE__,__LINE__,__FUNCTION__);
}

#define OK true

#define FIX_UNIT true
#define SND_DEF_PAN 1

enum
{
	ERR_NOEFFECT,
	ERR_RANGE,
	ERR_FOPEN
} OSErr;

