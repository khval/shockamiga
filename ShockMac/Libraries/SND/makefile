
C=GCC

INC = -I Source
INC += -I ../
INC += -I ../missing/
INC += -I ../../Libraries/H
INC += -I ../../Libraries/LG/Source/

files += Source/DIG_INIT.C
files += Source/DIG_OPS.C
files += Source/MASTER.C
files += Source/MID_INIT.C
files += Source/MID_OPS.C
files += Source/SND_UTIL.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
