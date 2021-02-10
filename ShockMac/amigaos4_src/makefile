

C=g++

INC = -I./ -I "../Game Src/Headers/" -I "../Game Src" 

DEFS = -DLZW_BUFF_SIZE=1024

files =

files += DialogHelpers.c
files += InitMac.c
files += MacTune.c
files += MoviePlay.c
files += Prefs.c
files += Shock.c
files += ShockBitmap.c
files += ShockDialogs.c
files += ShockHelp.c
files += Credits.c
files += AEHandlers.c
files += Tests.c

files_o = ${files:.c=.o}

all:	${files_o}
	echo All done

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

