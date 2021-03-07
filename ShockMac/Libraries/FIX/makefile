
C=GCC

libName =../../LIB/libfix.a

INC = -I Source -I ../
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += ATOFIX.C
files += FIX.C
files += FIXSPRNT.C
files += FIX_POW.C
files += F_EXP.C
files += MakeTables.c
files += FIX_SQRT.C
files += FIX24.C		# missing fix24_sqrt(...)

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o} 
	ar rcs ${libName}  ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

clean:
	rm ${files_o} $(libName)