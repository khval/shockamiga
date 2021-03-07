
C=GCC

libName=libpalette.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source -I ./ -I ../
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/2D/Source/
INC += -I $(base)Libraries/FIX/Source/
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/PALETTE/Source/

files += Source/PALETTE.C


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
