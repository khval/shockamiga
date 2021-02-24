
#ifndef __amigaos4_h__
#define __amigaos4_h__

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/intuition.h>

// conflicts with AmigaOS.

#define Region _ss_Region
#define Gadget _ss_Gadget


// -----------------------------------------------------------------------------------------------------
// Trying to define stuff maybe std to MacOS, but AmigaOS does not have....
// ------------------------------------------------------------------------------------------------------


typedef unsigned int uint;
typedef unsigned short ushort;

typedef struct Window * WindowPtr;
typedef uint32_t MenuHandle;		//  I'm thinking emulate this in a array
typedef uint32_t RgnHandle;		//  I'm thinking emulate this in a array

typedef char ** Handle;			//  its possible this used as mutex lock.

typedef uint32_t CursHandle;		//  I'm thinking emulate this in a array

typedef int TimerUPP;

typedef const char ConstStr255Param[256];
typedef char Str255[256];

typedef char * StringPtr;	

// gr short for graphics, i guess.


typedef bool Boolean;
typedef FILE FSSpec;
typedef int snd_digi_parms;		// most likely incorrect
typedef struct Process TMTask;		// guess, we need a Amiga process here.
typedef void * Ptr;
typedef char *GrafPtr;
typedef void *GrafPort;
typedef void *CGrafPort;
typedef void *CGrafPtr;
typedef int PixMapHandle;
typedef int CTabHandle;

typedef uint32_t OSErr;
typedef uint32_t ResType;

typedef int32_t Cursor;
typedef int32_t Rect;
typedef int32_t Region;

// I think this are in MacOS, we need a wrapper.

extern void HLock( Handle h );
extern void HUnlock( Handle h );

extern Handle GetResource( uint16_t item, uint16_t value );
extern void ReleaseResource( Handle h );
extern void DisposHandle( Handle h );

extern void numtostring( int input, char *output );
extern void *NewPtr( uint32_t size );	// alloc memory
extern void DisposPtr( void *ptr );	// free memory, (this one is used in Screen.C)
extern void DisposePtr( void *ptr );	// free memory
extern void DebugStr( const char *txt );
extern void StopAlert( uint32_t a, uint32_t b);
extern void BlockMove( char *from, char *to, uint32_t size);

extern long TickCount(void);

// not sure about this might be defined some where else.


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

#include "files.h"

extern void FSMakeFSSpec( int gDataVref, int gDataDirID, const char *CURRENT_GAME_FNAME, FSSpec *currSpec);
extern void ParamText(uchar *buf, uchar *explain, const char *a, const char *b);
#define BlockMoveData(dest,src,size) memcpy(dest,src,size)

#endif

