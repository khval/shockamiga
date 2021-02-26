

C=GCC
CPP=G++

basePath = ../../../

libPath = -L $(basePath)LIB
libs =-lfix

INC = -I ../Source -I ./
INC += -I $(basePath)Libraries/H
INC += -I $(basePath)Libraries/FIX/Source/

files += MakeTables/FMAKETAB.CPP
#files += TrigErr/TRIGERR.C
files += asmSample/AsmSample.c
files += FIX24TST.C
files += SqrtTest/SQRTTEST.C

elfs2 = ${files:.CPP=.elf}
elfs1 = ${elfs2:.C=.elf}
elfs = ${elfs1:.c=.elf}

DEFS = -D__USE_INLINE__ -Dnil=NULL

all:	 ${elfs} 

%.elf: %.CPP
	@echo "Compile *E[1m $@ *E[0m"
	$(CPP) $(libPath) $(libs) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< -o $@

%.elf: %.C
	@echo "Compile *E[1m $@ *E[0m"
	$(C) $(libPath) $(libs) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< -o $@

%.elf: %.c
	@echo "Compile *E[1m $@ *E[0m"
	$(C) $(libPath) $(libs) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< -o $@

clean:
	delete ${elfs} 