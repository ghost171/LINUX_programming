GENERATES = prog README	output1.txt	output2.txt	output3.txt
TRASH = *.o *~ o.*


SHELL	=	/bin/sh
CC	=	gcc
FLAGS	=	# -std=gnu99 -Iinclude
CFLAGS	=	-fPIC	-g#-pedantic -Wall -Wextra -ggdb3
LDFLAGS	=	-shared
RELEASEFLAGS	=	-O2	-D	NDEBUG	-combine	-fwhole-program

TARGET	=	libout.so
OBJECTS	=	prog.o	fun.o	const.o
TARGET_2	=	libout.a
OBJECTS_1	=	const.o	fun.o	prog.o
OBJECTS_C	=	const.c	fun.c	prog.c
TARGET_BIN_1	=	prog-a
TARGET_BIN_2	=	prog-so


all:	prog	$(TARGET)	$(TARGET_2)	$(TARGET_BIN_1)	$(TARGET_BIN_2)	test	clean

prog:	const.o	fun.o	prog.o
	$(CC)	$^	-o	$@

$(TARGET):	$(OBJECTS)
	$(CC)	$(FLAGS)	$(CFLAGS)	$(DEBUGFLAGS)	-o	$(TARGET)	$(OBJECTS)

$(TARGET_2):	$(OBJECTS_1)
	ar	-rcs	$(TARGET_2)	$(OBJECTS_1)

$(TARGET_BIN_1):	$(OBJECTS)
	gcc	$(OBJECTS)	-L.	-lout	-o	$(TARGET_BIN_1)

$(TARGET_BIN_2):	$(OBJECTS)
	gcc	$(OBJECTS)	-L.	-lout	-o	$(TARGET_BIN_2)

test:
	./prog	>	output1.txt
	./prog-a	>	output2.txt
	./prog-so	>	output3.txt

	cmp	output1.txt	output2.txt
	cmp	output2.txt	output3.txt
	cmp	output1.txt	output3.txt

	./prog	1	>	output1.txt
	./prog-a	1	>	output2.txt
	./prog-so	1	>	output3.txt

	cmp	output1.txt	output2.txt
	cmp	output2.txt	output3.txt
	cmp	output1.txt	output3.txt

	./prog	1	2	3	>	output1.txt
	./prog-a	1	2	3	>	output2.txt
	./prog-so	1	2	3	>	output3.txt

	cmp	output1.txt	output2.txt
	cmp	output2.txt	output3.txt
	cmp	output1.txt	output3.txt

clean:
	rm	-f	$(TRASH)

distclean:	clean
	rm	-rf	$(GENERATES)