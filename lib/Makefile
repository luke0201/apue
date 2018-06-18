ROOT=..
INCLUDE=$(ROOT)/include
LIB=$(ROOT)/lib

OBJ=error.o path_alloc.o set_fl.o clr_fl.o open_max.o pr_exit.o pr_mask.o signal_intr.o TELL_WAIT.o daemonize.o set_cloexec.o lock_reg.o readn_writen.o
OUTPUT=libapue.a

CC=clang
CFLAGS=-Wall -O3 -I$(INCLUDE) -DMACOS
LDFLAGS=-L$(LIB)

$(OUTPUT): $(OBJ)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	-rm $(OBJ)
	-rm $(OUTPUT)
