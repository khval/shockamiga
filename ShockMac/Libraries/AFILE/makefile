
C=GCC

libName=libafile.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I ../../Libraries/H
INC += -I ../../Libraries/2d/Source/
INC += -I ../../Libraries/FIX/Source/

files += AddSoundToMovie.c
files += AFILE.C
files += AMOV.C
files += ANIMCONV.C
files += AQTM.C
files += COMPOSE.C
files += DumpHex.c
files += MovConv.c
files += MovConvDiv.c
files += MOVINFO.C
files += OldAnimConv.c
files += PalExtract.c
files += QTConv.c
files += QUIKCONV.C
files += QUIKDUMP.C
files += QUIKTIME.C
files += QUIKWRIT.C
files += SubTitles.c


files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}	$(libName)	$(test_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.c
	$(C) -L ../../LIB $(CPPFLAGS) $(INC) $(INCTEST) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete ${files_o} $(libName)

