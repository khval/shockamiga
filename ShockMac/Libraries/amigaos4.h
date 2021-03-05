
#include <proto/exec.h>

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

typedef char *GrafPtr;

typedef struct
{
	unsigned short red;
	unsigned short green;
	unsigned short blue;
} RGBColor;

typedef struct
{
	int value;
	RGBColor rgb;
} ColorSpec;

typedef struct 
{
	int what;
} EventRecord;

typedef char ** Handle;			//  its possible this used as mutex lock.

#define NewHandle(extraSize) (malloc( sizeof(Handle) + extraSize ))

typedef const char ConstStr255Param[256];
typedef char Str255[256];

typedef uint32_t OSErr;
typedef bool Boolean;

typedef struct {

	char *baseAddr;
	uint32_t pixelSize;
	uint32_t rowBytes;

	struct {
		int *ctTable;
	} **pmTable;

	struct {
		int left;
		int right;
		int top;
		int bottom;
	} bounds;

}  ** PixMapHandle;

typedef struct {
	int *ctTable;
} ** CTabHandle;

typedef struct __window__{
	void *portRect;
} *WindowPtr;

typedef struct _HParamBlockRec1_ {
	struct _HParamBlockRec2_ {
		uint32_t ioCompletion;
	} ioParam; 
	struct _HParamBlockRec3_ {
		uint32_t ioFDirIndex;
		uint32_t ioVRefNum;
		uint32_t ioDirID;
		const char *ioNamePtr;
	} fileParam; 
} HParamBlockRec;

typedef void * CInfoPBPtr;

typedef int32_t Rect;
typedef int BitMap;
typedef int CGrafPtr;
typedef int GrafPort;
typedef int CGrafPort;
typedef int Point;
typedef FILE FSSpec;

typedef void * MenuHandle;
typedef void * RgnHandle;
typedef void * CursHandle;

typedef struct __GD__ {
	PixMapHandle gdPMap;
} **GDHandle;

extern WindowPtr GetNewCWindow( int a, long, WindowPtr );
extern GDHandle GetMainDevice();

typedef struct Process * TMTask;		// guess, we need a Amiga process here.

#define noErr 0

#define nil 0

enum	// Gestalt
{
	gestaltQuickdrawFeatures = 1,
	gestaltHasColor,
	gestaltQuickTime,
	gestaltSoundAttr,
	gestaltMultiChannels,
	gestaltSysArchitecture,
	gestaltPowerPC
};

struct {
void *thePort;
} qd;

#define GetCursor(watchCursor) 0;

enum
{
	keyDownMask = 1,
	autoKeyMask = 2,
	mDownMask = 4,
	mouseDown = 8
};

typedef int ResType;
typedef void * Ptr;
typedef int wide;

extern void DebugStr(const char *txt);
extern uint32_t MemError();

#define BlockMove(src,dest,size) memcpy(dest,src,size)
#define BlockMoveData(src,dest,size) memcpy(dest,src,size)

//	"void far *" to "void *"
#define far


