
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += VALLOC.C
files += VTAB.C
files += WIRPOLY.C
files += SCREEN.C
files += SSCRN.C
files += StateStk.c
files += STRNSIZ.C
files += STRSCL.C
files += STRSIZ.C
files += STRUSCL.C
files += STRWID.C
files += STRWRAP.C
files += SVGAINIT.C
files += TEMPBM.C
files += TEMPTM.C
files += TLUCDAT.C
files += TLUCTAB.C
files += LINTAB.C
files += MacDev.c
files += MODE.C
files += PAL.C
files += PERMAP.C
files += PERSETUP.C
files += PERTOL.C
files += PIXFILL.C
files += RGB.C
files += CNVTAB.C
files += CONTEXT.C
files += DETECT.C
files += devtab.c
files += FCNTAB.C
files += INIT.C
files += InitMac2d.c
files += INVTAB.C
files += 2dTest.c
files += BIT.C
files += BITMAP.C
files += BLEND.C
files += BUFFER.C
files += CANVAS.C
files += CHAIN.C
files += ChnFuncs.c
files += CHRSIZ.C
files += CHRWID.C
files += CLOSE.C


files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
