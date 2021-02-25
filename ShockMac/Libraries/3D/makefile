
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += 3dTest.c
files += ALLOC.C
files += Bitmap.C
files += CLIP.C
files += DETAIL.C
files += FOV.C
files += GlobalV.C
files += INSTANCE.C
files += INTERP.C
files += LIGHT.C
files += MATRIX.C
files += POINTS.C
files += POLYGON.C
files += SLEW.C
files += TMAP.C
files += VECTOR.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
