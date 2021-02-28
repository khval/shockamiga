
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef char ** Handle;			//  its possible this used as mutex lock.
typedef long ResType;
typedef FILE FSSpec;

typedef char * mac_Ptr;

#ifdef Ptr
#undef Ptr
#endif

#define Ptr mac_Ptr



#define nil 0

extern long GetHandleSize(Handle h);
extern void FSMakeFSSpec( int gDataVref, int gDataDirID, const char *CURRENT_GAME_FNAME, FSSpec *currSpec);
extern long MaxSizeRsrc( char **x );
extern void BlockMove( char *from, char *to, uint32_t size);
extern void BlockMoveData( char *from, char *to, uint32_t size);
extern void DebugStr( const char *str );

extern void SetResLoad( bool opt );
extern Handle GetResource( uint16_t item, uint16_t value );
extern short ResError(void);
extern void ReadPartialResource( Handle h, char a, void *, long int );
extern void ReleaseResource( Handle h );
extern void ChangedResource( Handle h );
extern void WriteResource( Handle h );
extern void RmveResource( Handle h );
extern void SetHandleSize( Handle h , size_t size );

extern void HLock( Handle h );
extern void HLockHi( Handle h );
extern void HUnlock( Handle h );
extern void EmptyHandle( Handle h );
extern void DisposeHandle( Handle	resHdl);
extern Handle NewHandle(size_t size);
