ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

clean:
	-rm $(EXE)
