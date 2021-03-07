
#warning this file was created because it was missing, size of types, or order of type might be wrong.


#define firstSoundFormat 1

enum {
	smCurrentScript = 1
};

enum {
	SoundMediaType = 1
};

enum {
	soundCmd = 1,
	bufferCmd,
	dataOffsetFlag = 1L<<8
};

typedef int Media;
typedef int Track;

typedef struct {
	int encode;
	int sampleRate;
	int length;
	int sampleArea;
} SoundHeader;

typedef SoundHeader *SoundHeaderPtr;
typedef int SFTypeList[100];

typedef struct
{
	int sampleRate;
	int  descSize;
	int  resvd1;
	int  resvd2;
	int  dataRefIndex;
	int  compressionID;
	int  packetSize;
	int  version;
	int  revlevel;
	int  vendor;
	int numChannels;
	int sampleSize;
	int dataFormat;
} SoundDescription;

typedef struct
{
	int sampleRate;
	int  descSize;
	int  resvd1;
	int  resvd2;
	int  dataRefIndex;
	int  compressionID;
	int  packetSize;
	int  version;
	int  revlevel;
	int  vendor;
	int numChannels;
	int sampleSize;
	int dataFormat;
	
	int numFrames;
	int sampleArea;
} ExtSoundHeader;

typedef struct
{
	int cmd;
	int param2;
} SndCommand;

typedef SoundDescription *SoundDescriptionPtr;
typedef ExtSoundHeader *ExtSoundHeaderPtr;
typedef SoundDescriptionPtr *SoundDescriptionHandle;

typedef int *SampleDescriptionPtr;
typedef SampleDescriptionPtr *SampleDescriptionHandle;

enum
{
	 extSH =  1,
	 stdSH
};


