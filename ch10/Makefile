ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig10.2 fig10.5 fig10.9 fig10.10 fig10.15 fig10.20 fig10.22 fig10.23 fig10.26 fig10.31

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

fig10.9: fig10.8.c fig10.9.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%: %.c

clean:
	-rm $(EXE)
