ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig12.16 fig12.17

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

fig12.8: fig12.4.c fig12.8.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	-rm $(EXE)
