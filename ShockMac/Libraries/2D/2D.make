#
# Copyright (C) 2015-2018 Night Dive Studios, LLC.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#   File:       2D.make
#   Target:     2D.xcoff  (static library)


MAKEFILE     = 2D.make
MondoBuild = ""
Sym_PPC      = -sym off 
ObjDir_PPC   = ${Obj}
Source		 = ./Source/
Clip		 = ${Source}Clip/
Flat8		 = ${Source}Flat 8/
Gen			 = ${Source}Gen/
GR			 = ${Source}GR/
RSD			 = ${Source}RSD/
FixDir	 	 = ${FIX}Source/
ResDir		 = ${RES}Source/
LGDir		 = ${LG}Source/
DStructDir	 = ${DSTRUCT}Source/
MacSrc		= "../../Mac Src/"
LIB			 = 
Includes     = -i ${Source} \
			   -i ${Clip} \
			   -i "${Flat8}" \
			   -i ${Gen} \
			   -i ${GR} \
			   -i ${RSD} \
			   -i ${MacSrc} \
			   -i ${FixDir} \
			   -i ${DStructDir} \
			   -i ${ResDir} \
			   -i ${LGDir}

PPCCOptions  = ${Includes} ${Sym_PPC} -align mac68k -inline on -opt speed -load "{LIB}MacHeaders.MrC"

Objects_PPC  = \
		${ObjDir_PPC}BIT.o \
		${ObjDir_PPC}BITMAP.o \
		${ObjDir_PPC}BLEND.o \
		${ObjDir_PPC}BUFFER.o \
		${ObjDir_PPC}CANVAS.o \
		${ObjDir_PPC}CHAIN.o \
		${ObjDir_PPC}ChnFuncs.o \
		${ObjDir_PPC}CHRSIZ.o \
		${ObjDir_PPC}CHRWID.o \
		${ObjDir_PPC}CLOSE.o \
		${ObjDir_PPC}CONTEXT.o \
		${ObjDir_PPC}CNVTAB.o \
		${ObjDir_PPC}DETECT.o \
		${ObjDir_PPC}FCNTAB.o \
		${ObjDir_PPC}INIT.o \
		${ObjDir_PPC}INVTAB.o \
		${ObjDir_PPC}LINTAB.o \
		${ObjDir_PPC}MODE.o \
		${ObjDir_PPC}PAL.o \
		${ObjDir_PPC}PERMAP.o \
		${ObjDir_PPC}PERSETUP.o \
		${ObjDir_PPC}PERTOL.o \
		${ObjDir_PPC}PIXFILL.o \
		${ObjDir_PPC}RGB.o \
		${ObjDir_PPC}SCREEN.o \
		${ObjDir_PPC}SSCRN.o \
		${ObjDir_PPC}StateStk.o \
		${ObjDir_PPC}STRSCL.o \
		${ObjDir_PPC}STRUSCL.o \
		${ObjDir_PPC}STRNSIZ.o \
		${ObjDir_PPC}STRSIZ.o \
		${ObjDir_PPC}STRWID.o \
		${ObjDir_PPC}STRWRAP.o \
		${ObjDir_PPC}TEMPBM.o \
		${ObjDir_PPC}TEMPTM.o \
		${ObjDir_PPC}TLUCDAT.o \
		${ObjDir_PPC}TLUCTAB.o \
		${ObjDir_PPC}VALLOC.o \
		${ObjDir_PPC}VTAB.o \
		${ObjDir_PPC}WIRPOLY.o \
		\
		${ObjDir_PPC}FL8BL.o \
		${ObjDir_PPC}FL8BLDBL.o \
		${ObjDir_PPC}FL8CHFL8.o \
		${ObjDir_PPC}FL8CLEAR.o \
		${ObjDir_PPC}FL8CLIN.o \
		${ObjDir_PPC}FL8CNV.o \
		${ObjDir_PPC}FL8CPLY.o \
		${ObjDir_PPC}FL8DBL.o \
		${ObjDir_PPC}FL8FL8.o \
		${ObjDir_PPC}FL8FL8C.o \
		${ObjDir_PPC}FL8FL8M.o \
		${ObjDir_PPC}FL8FLTR2.o \
		${ObjDir_PPC}FL8FT.o \
		${ObjDir_PPC}FL8G24.o \
		${ObjDir_PPC}FL8GFL8.o \
		${ObjDir_PPC}FL8GPIX.o \
		${ObjDir_PPC}FL8HFL8.o \
		${ObjDir_PPC}FL8HLIN.o \
		${ObjDir_PPC}FL8LIN.o \
		${ObjDir_PPC}FL8LP.o \
		${ObjDir_PPC}FL8MSCL.o \
		${ObjDir_PPC}FL8MONO.o \
		${ObjDir_PPC}FL8NS.o \
		${ObjDir_PPC}FL8NTRP2.o \
		${ObjDir_PPC}FL8P.o \
		${ObjDir_PPC}FL8P24.o \
		${ObjDir_PPC}FL8PIX.o \
		${ObjDir_PPC}FL8PLY.o \
		${ObjDir_PPC}FL8PNT.o \
		${ObjDir_PPC}FL8RECT.o \
		${ObjDir_PPC}FL8ROW.o \
		${ObjDir_PPC}FL8RSD8.o \
		${ObjDir_PPC}FL8S.o \
		${ObjDir_PPC}FL8SLIN.o \
		${ObjDir_PPC}FL8SPLY.o \
		${ObjDir_PPC}FL8SUB.o \
		${ObjDir_PPC}FL8TL8.o \
		${ObjDir_PPC}FL8VLIN.o \
		${ObjDir_PPC}FL8WCLIN.o \
		${ObjDir_PPC}FL8WLIN.o \
		\
		${ObjDir_PPC}FL8LNOP.o \
		${ObjDir_PPC}FL8LL.o \
		${ObjDir_PPC}FL8NL.o \
		${ObjDir_PPC}Fl8F.o \
		${ObjDir_PPC}FL8LF.o \
		\
		${ObjDir_PPC}FL8W.o \
		${ObjDir_PPC}FL8LW.o \
		\
		${ObjDir_PPC}FL8TSMAP.o \
		${ObjDir_PPC}FL8COP.o \
		${ObjDir_PPC}FL8CTP.o \
		${ObjDir_PPC}FL8LOP.o \
		${ObjDir_PPC}FL8LTP.o \
		${ObjDir_PPC}FL8OPL.o \
		${ObjDir_PPC}FL8TPL.o \
		\
		${ObjDir_PPC}GENBOX.o \
		${ObjDir_PPC}GENCHFL8.o \
		${ObjDir_PPC}GENCHR.o \
		${ObjDir_PPC}GENCIRC.o \
		${ObjDir_PPC}GENCLIN.o \
		${ObjDir_PPC}GENCNV.o \
		${ObjDir_PPC}GENCWLIN.o \
		${ObjDir_PPC}GENDISK.o \
		${ObjDir_PPC}GENEL.o \
		${ObjDir_PPC}GENERAL.o \
		${ObjDir_PPC}GENF24.o \
		${ObjDir_PPC}GENFL8.o \
		${ObjDir_PPC}GENFL8C.o \
		${ObjDir_PPC}GENGFL8.o \
		${ObjDir_PPC}GENHFL8.o \
		${ObjDir_PPC}GENHLIN.o \
		${ObjDir_PPC}GENLIN.o \
		${ObjDir_PPC}GENMONO.o \
		${ObjDir_PPC}GENOV.o \
		${ObjDir_PPC}GENPIX.o \
		${ObjDir_PPC}GENRECT.o \
		${ObjDir_PPC}GENRSD8.o \
		${ObjDir_PPC}GENRSDBM.o \
		${ObjDir_PPC}GENRSDTM.o \
		${ObjDir_PPC}GENSLIN.o \
		${ObjDir_PPC}GENSTR.o \
		${ObjDir_PPC}GENTE.o \
		${ObjDir_PPC}GENTL8.o \
		${ObjDir_PPC}GENTM.o \
		${ObjDir_PPC}GENUCHR.o \
		${ObjDir_PPC}GENUCLIN.o \
		${ObjDir_PPC}GENUHLIN.o \
		${ObjDir_PPC}GENULIN.o \
		${ObjDir_PPC}GENUSLIN.o \
		${ObjDir_PPC}GENUSTR.o \
		${ObjDir_PPC}GENUVLIN.o \
		${ObjDir_PPC}GENVCPLY.o \
		${ObjDir_PPC}GENVLIN.o \
		${ObjDir_PPC}GENVPOLY.o \
		${ObjDir_PPC}GENVRECT.o \
		${ObjDir_PPC}GENWCLIN.o \
		${ObjDir_PPC}GENWLIN.o \
		\
		${ObjDir_PPC}GRD.o \
		${ObjDir_PPC}GRILIN.o \
		${ObjDir_PPC}GRMALLOC.o \
		${ObjDir_PPC}GRNULL.o \
		${ObjDir_PPC}GRUILIN.o \
		\
		${ObjDir_PPC}devtab.o \
		${ObjDir_PPC}MacDev.o \
		${ObjDir_PPC}SVGAINIT.o \
		\
		${ObjDir_PPC}RSDCVT.o \
		${ObjDir_PPC}RSDUnpack.o \
		\
		${ObjDir_PPC}CLPCLIN.o \
		${ObjDir_PPC}CLPF24.o \
		${ObjDir_PPC}CLPLIN.o \
		${ObjDir_PPC}CLPLIN2.o \
		${ObjDir_PPC}CLPLTAB.o \
		${ObjDir_PPC}CLPMONO.o \
		${ObjDir_PPC}CLPPLY.o \
		${ObjDir_PPC}CLPPOLY.o \
		${ObjDir_PPC}CLPRECT.o \
		${ObjDir_PPC}CLPSLIN.o 

2DObjects_Asm  = \
		${Source}LinearLoop.s.o \
		${Source}FloorLoop.s.o \
		${Source}WallLitLoop1D.s.o \
		${Source}PermapLoop.s.o

Obj +=  ${Source}		# Objects in Obj folder depend on sources in Source folder
Obj +=  ${Clip}
Obj +=  ${Flat8}
Obj +=  ${Gen}
Obj +=  ${GR}
Obj +=  ${RSD}

all:
	echo $(Objects_PPC)

%.o: %.c
	GCC $(CPPFLAGS) $(Includes) $(DEFS) $(CXXFLAGS)$< -o $@

