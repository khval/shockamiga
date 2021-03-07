
libName=libui.a

C=GCC

base=../../
abase = //

libDir=$(base)LIB/

INC = -I Source
INC += -I ../
INC += -I ../Missing
INC += -I $(base)Libraries/H
INC += -I $(base)Libraries/RES/Source/
INC += -I $(base)Libraries/Rect/Source/
INC += -I $(base)Libraries/2D/Source/
INC += -I $(base)Libraries/INPUT/Source/
INC += -I $(base)Libraries/DSTRUCT/Source/
INC += -I $(base)Libraries/UI/Source/
INC += -I $(base)Libraries/LG/Source/
INC += -I $(base)Libraries/FIX/Source/

libs += -lfix

files += Source/TNGSLIDR.C
files += Source/TNGTEMP.C
files += Source/TNGTEXTG.C
files += Source/UIRES.C
files += Source/VMOUSE.C
files += Source/REGION.C
files += Source/SLAB.C
files += Source/SLIDER.C
files += Source/TEXTGADG.C
files += Source/TEXTTOOL.C
files += Source/TNG.C
files += Source/TNGBARRY.C
files += Source/TNGFONT.C
files += Source/TNGMENU.C
files += Source/TNGPLAIN.C
files += Source/TNGPUSHB.C
files += Source/BUTARRAY.C
files += Source/CURDRW.C
files += Source/CURSORS.C
files += Source/EVENT.C
files += Source/GADGETS.C
files += Source/HOTKEY.C
files += Source/MENU.C
files += Source/MONOFONT.C
files += Source/PLAIN.C
files += Source/PUSHBUTT.C
files += Source/REALFONT.C
files += Source/QBOXGADG.C
files += Source/TNGQBOX.C

files_o1 = ${files:.C=.o}
files_o = ${files_o1:.c=.o}

tests = Tests/UITEST.C

tests_elfs = ${tests:.c=.elf}

DEFS = -D__USE_INLINE__ -DNewPtr=malloc  -DDisposePtr=free

all_files = ${files_o} 

all:  $(all_files) $(libName) $(tests_elfs)

$(libName): ${files_o} 
	ar rcs $(libDir)$@ ${files_o}

%.o: %.C
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) -c $< -o $@

%.elf: %.C
	$(C) -L../../LIB $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) $< $(libs) -o $@

clean:
	delete $(all_files) $(abase)LIB/$(libName)

