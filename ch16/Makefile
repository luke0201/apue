ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig16.9 fig16.16 fig16.17 fig16.18 fig16.19

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

%: %.c

fig16.16: fig16.11.c fig16.16.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

fig16.17: fig16.22.c fig16.17.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

fig16.18: fig16.22.c fig16.18.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

fig16.20: fig16.22.c fig16.20.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	-rm $(EXE)
