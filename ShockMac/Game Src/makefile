
C=gcc

INC = -I./
INC += -I./Headers/ 
INC += -I../amigaos4_src
INC += -I ../Libraries/H
INC += -I ../Libraries/LG/Source/
INC += -I ../Libraries/RES/Source/
INC += -I ../Libraries/EDMS/Source/
INC += -I ../Libraries/FIX/Source/
INC += -I ../Libraries/PALETTE/Source/
INC += -I ../Libraries/2D/Source/
INC += -I ../Libraries/3D/Source/
INC += -I ../Libraries/DSTRUCT/Source/
INC += -I ../Libraries/UI/Source/
INC += -I ../Libraries/INPUT/Source/
INC += -I ../Libraries/VOX/Source/


DEFS = -DLZW_BUFF_SIZE=1024

files =

# files += _del_trigger.c

# files that compiles.

files += WEAPONS.C
files += WARES.C 
files += VITALS.C 
files += VIEWHELP.C 
files += VIEW360.C 
files += STATICS.C
files += SHODAN.C
files += PALFX.C
files += OBJPROP.C
files += OBJLOAD.C
files += OBJAPP.C 
files += MINIMAX.C 
files += MAINLOOP.C
files += HUDOBJ.C 
files += HFLIP.C
files += HAND.C 
files += GR2SS.C
files += GEARMFD.C
files += GAMETIME.C
files += GAMESTRN.C
files += GAMESORT.C 
files += GAMEOBJ.C
files += FULLAMAP.C
files += FRUTIL.C
files += FRPTS.C
files += FROBJ.C
files += FRMAIN.C
files += FRCOMPIL.C 
files += FRCLIP.C
files += FIXTRMFD.C
files += FACEOBJ.C 
files += EFFECT.C
files += DRUGS.C
files += DAMAGE.C
files += CYBERMFD.C 
files += CYBER.C
files += CONE.C
files += COMBAT.C 
files += CARDMFD.C
files += BARK.C 
files += AUTOMAP.C
files += TOOLS.C
files += TFUTIL.C
files += TARGET.C
files += STATUS.C
files += SCREEN.C
files += RENDTOOL.C
files += RENDER.C
files += PLOTWARE.C
files += OLHSCAN.C
files += OLH.C
files += MOVEKEYS.C
files += MFDPANEL.C
files += MFDGUMP.C
files += MFDGAMES.C
files += MFDGADG.C
files += HUD.C
files += GAMEREND.C
files += AMMOMFD.C
files += AI.C 
files += TRIGGER.C
files += TFDIRECT.C
files += STAR.C
files += SIDEICON.C
files += SCHEDULE.C
files += POPUPS.C
files += PHYSICS.C 
files += PATHFIND.C
files += OBJUSE.C
files += MLIMBS.C
files += MFDFUNC.C
files += MAP.C 
files += GRENADES.C
files += GAMESYS.C
files += FROSLEW.C
files += AMAP.C
files += WRAPPER.C

# not working....

# files += TEXTMAPS.C
# files += SNDCALL.C
# files += SETUP.C
# files += SAVELOAD.C 
# files += PLAYER.C
# files += OBJSIM.C
# files += OBJECTS.C
# files += NEWMFD.C
# files += NEWAI.C
# files += MUSICAI.C
# files += LEANMETR.C
# files += INVENT.C
# files += INPUT.C
# files += INIT.C
# files += HKEYFUNC.C
# files += GAMEWRAP.C 
# files += GAMELOOP.C
# files += FULLSCRN.C 
# files += FrUtils.C
# files += FRTERR.C 
# files += FRTABLES.C
# files += FRSETUP.C
# files += FRPIPE.C 
# files += FRCAMERA.C
# files += EMAIL.C
# files += DIGIFX.C 
# files += CYBRND.C
# files += CYBMEM.C
# files += CRITERR.C
# files += CITRES.C
# files += BIOHELP.C
# files += AUDIOLOG.C
# files += AMAPLOOP.C 
# files += AIRUPT.C
files += VMAIL.C 

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

