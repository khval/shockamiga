
C=GCC

libName=libinput.a
base=../../
abase = //

libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/FIX/Source/

files += Source/KBCOOK.C
files += Source/kbMac.c
files += Source/MOUSE.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:  $(files_o) $(libName) $(tests_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.c
	$(C) -L$(base)LIB $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete $(files_o) $(abase)LIB/$(libName)
