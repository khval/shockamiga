
C=GCC

libName=lib2d.a
base=../../
abase = //
libDir=$(base)LIB/

INC = -I Source -I ./ -I ../
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/RES/Source/
INC += -I ../../Libraries/2D/Source/
INC += -I ../../Libraries/2D/Source/Gen/
INC += -I ../../Libraries/2D/Source/GR/
INC += -I ../../Libraries/2D/Source/Clip/
INC += -I "../../Libraries/2D/Source/Flat 8/"
INC += -I ../../Libraries/3D/Source/
INC += -I ../../Libraries/LG/Source/
INC += -I ../../amigaos4_src/

INCTEST += -I ../../Libraries/DSTRUCT/Source/

files += Source/VTAB.C
files += Source/WIRPOLY.C
files += Source/VALLOC.C
files += Source/SCREEN.C
files += Source/SSCRN.C
files += Source/StateStk.c
files += Source/STRNSIZ.C
files += Source/STRSCL.C
files += Source/STRSIZ.C
files += Source/STRUSCL.C
files += Source/STRWID.C
files += Source/STRWRAP.C
files += Source/SVGAINIT.C
files += Source/TEMPBM.C
files += Source/TEMPTM.C
files += Source/TLUCDAT.C
files += Source/TLUCTAB.C
files += Source/MODE.C
files += Source/PAL.C
files += Source/PIXFILL.C
files += Source/RGB.C
files += Source/CNVTAB.C
files += Source/CONTEXT.C
files += Source/DETECT.C
files += Source/devtab.c
files += Source/FCNTAB.C
files += Source/INIT.C
files += Source/INVTAB.C
files += Source/BIT.C
files += Source/BITMAP.C
files += Source/BLEND.C
files += Source/BUFFER.C
files += Source/CANVAS.C
files += Source/CHAIN.C
files += Source/ChnFuncs.c
files += Source/CHRSIZ.C
files += Source/CHRWID.C
files += Source/CLOSE.C
files += Source/LINTAB.C
files += Source/MacDev.c
files += Source/PERMAP.C
files += Source/PERSETUP.C
files += Source/PERTOL.C
files += Source/InitMac2d.c

tests += Source/2dTest.c
tests += "Test Source/SimpleMain.c 
tests += "Test Source/SimpMain.c"
tests += "Test Source/xSimpMain.c"

libs += -lfix -l2d -lpalette

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

test_elfs = ${tests:.c=.elf}

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

