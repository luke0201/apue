ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig5.4 fig5.5 fig5.11 fig5.12 fig5.13

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

clean:
	-rm $(EXE)
