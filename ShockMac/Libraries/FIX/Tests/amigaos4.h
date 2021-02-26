
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <proto/exec.h>

#undef Alert

typedef void * Ptr;

struct QDGlobals {
	void *thePort;
}  ;

#define InitGraf(x)
#define InitFonts()
#define InitWindows()
#define InitMenus()
#define TEInit()
#define InitDialogs(x)
#define InitCursor()

static short Alert( int msgid, const char *msgm )
{
	char txt[30];
	const char *type  = NULL;

	switch (msgid)
	{
		case 128:
			type = "kChooseAMessageAlertID";
			break;
		case 129:
			type = "kDisplayMessageAlertID";
			break;			
	}

	if (type)
	{
		printf("Alart( msgid: %s, msg: %s )\n",type, msgm ? msgm : "NULL" );
	}
	else
	{
		printf("Alart( msgid: %d, msg: %s )\n",msgid, msgm ? msgm : "NULL" );
	}
};

static void paramtext(const char *msg,const char *a,const char *b,const char *c)
{
	printf("paramtext(msg: %s,a: %s,b: %s,c: %s)\n",
			msg ? msg : NULL,
			a ? a : NULL,
			b ? b : NULL,
			c ? c : NULL
		);
}

#define ClickHandler(x) 
