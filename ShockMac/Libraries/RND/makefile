
libName=librnd.a

C=GCC

base=../../
abase = //

libDir=$(base)LIB/

INC = -I Source
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/FIX/Source/

files += Source/RND.c

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

tests = Tests/RNDTEST.C

tests_elfs = ${tests:.C=.elf}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc

all_files = ${files_o} 

all:  $(all_files) $(libName) $(tests_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.C
	$(C) -L../../LIB $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< -lfix -lrnd -o $@

clean:
	delete $(all_files) $(abase)LIB/$(libName)

