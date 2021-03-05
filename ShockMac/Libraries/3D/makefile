
C=GCC

libName=lib2d.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source -I ./ -I ../
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/FIX/Source/
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/2D/Source/
INC += -I "$(base)amigaos4_src"

files += Source/ALLOC.C
files += Source/CLIP.C
files += Source/DETAIL.C
files += Source/FOV.C
files += Source/GlobalV.C
files += Source/LIGHT.C
files += Source/MATRIX.C
files += Source/SLEW.C
files += Source/TMAP.C
files += Source/VECTOR.C
files += Source/INSTANCE.C
files += Source/Bitmap.C
files += Source/POINTS.C
files += Source/POLYGON.C
files += Source/INTERP.C

tests_files += Source/3dTest.c

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc -DDisposPtr=free 

all:	 ${files_o}	$(libName)	$(test_elfs)

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


