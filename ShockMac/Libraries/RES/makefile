
C=GCC

INC = -I Source
INC += -I ./
INC += -I ../../Libraries/H
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/RES/Source/

files += Source/LZW.C
files += Source/RES.C
files += Source/REFACC.C
files += Source/RESACC.C
files += Source/RESBUILD.C
files += Source/RESFILE.C
files += Source/RESLOAD.C
files += Source/RESMAKE.C
files += Source/RESTYPES.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__  -DNewPtr=malloc -DPtr=void* -DDisposePtr=free

all:	 ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

clean:
	delete ${files_o}