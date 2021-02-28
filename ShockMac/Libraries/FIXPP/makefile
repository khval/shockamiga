
base = ../../
abase = //

libDir=$(base)LIB/

libName = libfixpp.a

C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += Source/FIXPP.cpp

files_o2 = ${files:.cpp=.o}
files_o1 = ${files_o2:.CC=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o} $(libName)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.cpp
	g++ $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.C
	$(C) -L$(base)/LIB $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< -lfix -lrnd -o $@

clean:
	delete ${files_o} $(abase)LIB/$(libName)