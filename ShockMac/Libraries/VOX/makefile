
libName=libvox.a

C=GCC

base=../../
abase = //

libDir=$(base)LIB/

INC = -I Source
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/2D/Source/
INC += -I $(base)Libraries/3D/Source/
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/FIX/Source/

libs += -lfix

files += Source/VOX2D.C
files += Source/VOX3D.C
files += Source/VOXINIT.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

tests = Tests/VoxTest.c

tests_elfs = ${tests:.c=.elf}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc -DPtr=void* -DDisposePtr=free

all_files = ${files_o} 

all:  $(all_files) $(libName) $(tests_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.c
	$(C) -L../../LIB $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete $(all_files) $(abase)LIB/$(libName)

