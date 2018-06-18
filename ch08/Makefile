ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

EXE=fig8.1 fig8.3 fig8.6 fig8.8 fig8.12 fig8.13 fig8.16 fig8.17 fig8.20 fig8.23 fig8.24 fig8.25 fig8.28 fig8.29 fig8.30 fig8.31

CC=clang
CFLAGS=-Wall -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB) -lapue

all: $(EXE)

fig8.29: fig8.29.c
	$(CC) $(CFLAGS) -DHAS_AXSIG -DHAS_ACORE $(LDFLAGS) -o $@ $^

%: %.c

clean:
	-rm $(EXE)
