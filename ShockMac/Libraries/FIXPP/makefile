
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += FIXPP.CC

files_o1 = ${files:.CC=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.CC
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
