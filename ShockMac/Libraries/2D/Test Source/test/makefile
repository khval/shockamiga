
C=g++

INC = -I./ -I./Headers/ -I../amigaos4_src

DEFS = -DLZW_BUFF_SIZE=1024

files =
 files += circletest.c
 files += font_test.c
 files += Full_Mapper_tests.c
 files += lighting_test.c
 files += lighting2_test.c
 files += polytest.c
 files += polytest2.c

files_o = ${files:.c=.o}

all:	${files_o}
	echo ${files_o}
	echo All done

%.o: %.c
	cat __wrap_start.c $< __wrap_end.c > t:tmp.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS) t:tmp.c -o $@



