ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig15.5 fig15.6 fig15.11 fig15.15 fig15.18 fig15.31

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

fig15.15: fig15.14.c fig15.15.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o myuclc fig15.14.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ fig15.15.c

fig15.18: fig15.17.c fig15.18.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o add2 fig15.17.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ fig15.18.c

%: %.c

clean:
	-rm $(EXE)
	-rm myuclc add2
