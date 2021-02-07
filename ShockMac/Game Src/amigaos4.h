
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
typedef char byte;
typedef int errtype;		// don't know if its correct.
typedef double fix;		// looks like float or double, maybe correct
typedef double fixang;	// looks like float or double, maybe correct

#define Ref int *
typedef int Id;

typedef struct BitMap grs_bitmap;		// don't know if its correct.

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

typedef int Pelvis;				// most likely incorrect
typedef int TerrainData;			// most likely incorrect

typedef struct
{
	int cyber_space;
} Robot;				// most likely incorrect

typedef int RndStream;
typedef int grs_canvas;
typedef void * Ptr;

// not sure what dummy is, can't find any manual on or doc on fix_make
// but this command is used to convert to fixed numbers.

#define fix_make(value,dummy) ((double) value)

#define RndRange(dummy,min,max) ((rand()%(max-min))+min)

#define EDMS_get_state

#define fix_mul(a,b) ((a)*(b))
#define fix_div(a,b) ((a)/(b))
#define fix_atan2 atan2
#define FIXANG_PI 3.14159265358979323846

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

#define OK true

#define FIX_UNIT true
