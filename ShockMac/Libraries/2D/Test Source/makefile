
C=g++

INC = -I../Source

DEFS = -DLZW_BUFF_SIZE=1024

files = SimpleMain.c


files_o = ${files:.c=.o}

all:	${files_o}
	echo ${files_o}
	echo All done

%.o: %.c
	$(C) $(CPPFLAGS) $(INC) $(DEFS) $(CXXFLAGS)$< -o $@



