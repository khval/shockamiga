
C=GCC

INC = -I Source
INC += -I ../../Libraries/H
INC += -I ../../Libraries/FIX/Source/

files += TNGSLIDR.C
files += TNGTEMP.C
files += TNGTEXTG.C
files += UIRES.C
files += VMOUSE.C
files += REGION.C
files += SLAB.C
files += SLIDER.C
files += TEXTGADG.C
files += TEXTTOOL.C
files += TNG.C
files += TNGBARRY.C
files += TNGFONT.C
files += TNGMENU.C
files += TNGPLAIN.C
files += TNGPUSHB.C
files += TNGQBOX.C
files += BUTARRAY.C
files += CURDRW.C
files += CURSORS.C
files += EVENT.C
files += GADGETS.C
files += HOTKEY.C
files += MENU.C
files += MONOFONT.C
files += PLAIN.C
files += PUSHBUTT.C
files += QBOXGADG.C
files += REALFONT.C


files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

DEFS = -D__USE_INLINE__

all:	 ${files_o}

%.o: Source/%.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: Source/%.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@
