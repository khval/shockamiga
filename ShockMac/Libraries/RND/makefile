
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/FIX/Source/

files += RND.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
