
C=gcc

INC = -I./
INC += -I./Headers/ 
INC += -I../amigaos4_src
INC += -I ../Libraries/H
INC += -I ../Libraries/LG/Source/
INC += -I ../Libraries/RES/Source/
INC += -I ../Libraries/EDMS/Source/
INC += -I ../Libraries/FIX/Source/

DEFS = -DLZW_BUFF_SIZE=1024

files =

 files += _del_trigger.c

# files += WEAPONS.C
# files += WARES.C 
# files += VMAIL.C 
files += VITALS.C 
files += VIEWHELP.C 
files += VIEW360.C 
files += STATICS.C
files += SHODAN.C
# files += TRIGGER.C
# files += TOOLS.C
# files += TFUTIL.C
# files += TFDIRECT.C
# files += TEXTMAPS.C
# files += TARGET.C
# files += STATUS.C
# files += STAR.C 
# files += SNDCALL.C
# files += SIDEICON.C
# files += SETUP.C
# files += SCREEN.C
# files += SCHEDULE.C
# files += SAVELOAD.C 
# files += RENDTOOL.C
# files += RENDER.C
# files += POPUPS.C
# files += PLOTWARE.C
# files += PLAYER.C
# files += PHYSICS.C 
# files += PATHFIND.C
files += PALFX.C
files += OLHSCAN.C
files += OLH.C
files += OBJUSE.C
files += OBJSIM.C
files += OBJPROP.C
files += OBJLOAD.C
files += OBJECTS.C
files += OBJAPP.C 
files += NEWMFD.C
files += NEWAI.C
files += MUSICAI.C
files += MOVEKEYS.C
files += MLIMBS.C
files += MINIMAX.C 
files += MFDPANEL.C
files += MFDGUMP.C
files += MFDGAMES.C
files += MFDGADG.C
files += MFDFUNC.C
files += MAP.C 
files += MAINLOOP.C	LEANMETR.C	INVENT.C	INPUT.C	INIT.C	HUDOBJ.C 
files += HUD.C	HKEYFUNC.C	HFLIP.C	HAND.C 
files += GRENADES.C	GR2SS.C	GEARMFD.C	GAMEWRAP.C 
files += GAMETIME.C	GAMESYS.C	GAMESTRN.C	GAMESORT.C 
files += GAMEREND.C	GAMEOBJ.C	GAMELOOP.C	FULLSCRN.C 
files += FULLAMAP.C	FrUtils.C	FRUTIL.C	FRTERR.C 
files += FRTABLES.C	FRSETUP.C	FRPTS.C	FRPIPE.C 
files += FROSLEW.C	FROBJ.C	FRMAIN.C	FRCOMPIL.C 
files += FRCLIP.C	FRCAMERA.C	FIXTRMFD.C	FACEOBJ.C 
files += EMAIL.C	EFFECT.C	DRUGS.C	DIGIFX.C 
files += DAMAGE.C	CYBRND.C	CYBMEM.C	CYBERMFD.C 
files += CYBER.C	CRITERR.C	CONE.C	COMBAT.C 
files += CITRES.C	CARDMFD.C	BIOHELP.C	BARK.C 
files += AUTOMAP.C	AUDIOLOG.C	AMMOMFD.C	AMAPLOOP.C 
files += AMAP.C	AIRUPT.C	AI.C 
files +=  WRAPPER.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}


all: ${files_o}
	echo All done

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

clean:
	delete ${files_o}

