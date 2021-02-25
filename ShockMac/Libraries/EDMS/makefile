
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += COLLIDE.CC
files += GLOBALS.CC
files += INTERFAC.CC
files += INTRSECT.CC
files += PHY_TOOL.CC
files += SOLITON.CC
files += TERRAIN.CC

files_o1 = ${files:.CC=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
