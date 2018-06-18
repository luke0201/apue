ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig14.1 fig14.7 fig14.12 fig14.20 fig14.21 fig14.27

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

clean:
	-rm $(EXE)
