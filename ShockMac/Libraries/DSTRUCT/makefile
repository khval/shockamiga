
C=GCC

libName=libstruct.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I ../../Libraries/H
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/FIX/Source/

files += Source/ARRAY.C
files += Source/HASH.C
files += Source/LLIST.C
files += Source/LLLIST.C
files += Source/PQUEUE.C
files += Source/RECT.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc -DDisposePtr=free 

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

