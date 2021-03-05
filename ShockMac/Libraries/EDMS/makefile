
C=GCC

libName=libedms.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I ../../Libraries/H
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/FIX/Source/
INC += -I ../../Libraries/FIXPP/Source/

files += Source/COLLIDE.CC
files += Source/GLOBALS.CC
files += Source/INTERFAC.CC
files += Source/INTRSECT.CC
files += Source/PHY_TOOL.CC
files += Source/SOLITON.CC
files += Source/TERRAIN.CC

files_o1 = ${files:.CC=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc -DDisposPtr=free 

all:	 ${files_o}	$(libName)	$(test_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.cpp
	g++ $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.c
	$(C) -L ../../LIB $(CPPFLAGS) $(INC) $(INCTEST) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete ${files_o} $(libName)
