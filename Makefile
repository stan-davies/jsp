CMD = gcc

FILES = 

INC = -I .

OUT = -o a

all : compile
compile:
	@${CC} ${FILES} ${INC} ${OUT}
