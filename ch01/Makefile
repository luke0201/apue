ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig1.3 fig1.4 fig1.5 fig1.6 fig1.7 fig1.8 fig1.9 fig1.10

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

clean:
	-rm $(EXE)
