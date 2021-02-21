
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

typedef struct Window * WindowPtr;
typedef uint32_t MenuHandle;		//  I'm thinking emulate this in a array
typedef uint32_t RgnHandle;		//  I'm thinking emulate this in a array

typedef uint32_t Handle;			//  its possible this used as mutex lock.

typedef uint32_t CursHandle;		//  I'm thinking emulate this in a array

typedef struct
{
	void *thePort;
} QDGlobals;

typedef int TimerUPP;


// gr short for graphics, i guess.

// draw bitmap

typedef struct
{
	int xxxx;
} Rect;

typedef bool Boolean;
typedef FILE FSSpec;

typedef int snd_digi_parms;		// most likely incorrect
typedef void * PQueue;			// most likely incorrect
typedef struct Process TMTask;		// guess, we need a Amiga process here.
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

// I think this are in MacOS, we need a wrapper.

extern void HLock( Handle h );
extern void HUnlock( Handle h );
extern void ReleaseResource( Handle h );
extern void numtostring( int input, char *output );
extern void *NewPtr( uint32_t size );	// alloc memory
extern void DisposPtr( void *ptr );	// free memory

// not sure about this might be defined some where else.

static void DisposePtr( void *ptr )
{
	printf("%s:%d:%s(%08x)\n",__FILE__,__LINE__,__FUNCTION__,ptr);
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

#ifdef OK
#undef OK
#endif

#define ok

#include "files.h"

extern void FSMakeFSSpec( int gDataVref, int gDataDirID, const char *CURRENT_GAME_FNAME, FSSpec *currSpec);

