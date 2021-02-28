
C=GCC

INC = -I Source -I ./
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/
INC += -I ../../Libraries/LG/Source/
INC += -I ../../Libraries/RES/Source/
INC += -I ../../Libraries/2D/Source/
INC += -I ../../Libraries/2D/Source/Gen/
INC += -I ../../Libraries/2D/Source/GR/
INC += -I ../../Libraries/2D/Source/Clip/
INC += -I ../../Libraries/3D/Source/
INC += -I ../../Libraries/LG/Source/
INC += -I ../../amigaos4_src/

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
iles += Source/2dTest.c

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc -DPtr=void* -DDisposePtr=free

all:	 ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

clean:
	delete ${files_o}