ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig3.1 fig3.2 fig3.5 fig3.11

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

clean:
	-rm $(EXE)
