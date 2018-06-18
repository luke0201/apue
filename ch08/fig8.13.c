#include "apue.h"

static void charatatime(char*);

int main(int argc, char* argv[])
{
    pid_t pid;

    TELL_WAIT();

    if ((pid = fork()) < 0)
    {
        err_sys("fork error");
    }
    else if (pid == 0)
    {
        WAIT_PARENT();  /* parent goes first */
        charatatime("output from child\n");
    }
    else
    {
        charatatime("output from parent\n");
        TELL_CHILD(pid);
    }
    exit(0);
}

static void charatatime(char* str)
{
    char* ptr;

    setbuf(stdout, NULL);  /* set unbuffered */
    for (ptr = str; *ptr != 0; ++ptr)
    {
        putc(*ptr, stdout);
    }
}
