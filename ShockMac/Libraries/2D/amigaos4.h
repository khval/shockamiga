
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

typedef char *GrafPtr;

typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
} RGBColor;

typedef struct
{
	int value;
	RGBColor rgb;
} ColorSpec;

typedef char ** Handle;			//  its possible this used as mutex lock.
typedef bool Boolean;
typedef int PixMapHandle;
typedef struct {
	int *ctTable;
} ** CTabHandle;
typedef int32_t Rect;
typedef int BitMap;
typedef int CGrafPtr;
typedef int GrafPort;
typedef int CGrafPort;
typedef int Point;


