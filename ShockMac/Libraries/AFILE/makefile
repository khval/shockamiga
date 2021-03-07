
C=GCC

libName=libafile.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I ../missing
INC += -I ../../Libraries/H
INC += -I ../../Libraries/DSTRUCT/Source/
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/2d/Source/
INC += -I ../../Libraries/Res/Source/
INC += -I ../../Libraries/FIX/Source/
INC += -I ../../Libraries/AMOV/Source/
INC += -I ../../amigaos4_src/

files += Source/AFILE.C
files += Source/AMOV.C
files += Source/ANIMCONV.C
files += Source/AQTM.C
files += Source/COMPOSE.C
files += Source/DumpHex.c
files += Source/MovConv.c
files += Source/MovConvDiv.c
files += Source/MOVINFO.C
files += Source/OldAnimConv.c
files += Source/PalExtract.c
files += Source/QTConv.c
files += Source/QUIKCONV.C
files += Source/QUIKDUMP.C
files += Source/QUIKTIME.C
files += Source/QUIKWRIT.C
files += Source/SubTitles.c

files_tools += AddSoundToMovie.c

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

tools_elfs = ${files_tools:.c=.elf}

DEFS = -D__USE_INLINE__

all:	 ${files_o}	$(libName)	$(tools_elfs)	$(test_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.c
	$(C) -L ../../LIB $(CPPFLAGS) $(INC) $(INCTEST) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete ${files_o} $(libName)

