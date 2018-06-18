#include "apue.h"
#include <sys/wait.h>

#define APUE_DIR "/Users/luke0201/Documents/programming/apue"

int main(int argc, char* argv[])
{
    pid_t pid;

    if ((pid = fork()) < 0)
    {
        err_sys("fork error");
    }
    else if (pid == 0)  /* child */
    {
        if (execl(APUE_DIR "/ch8/testinterp.sh", "testinterp.sh", "myarg1", "MY ARG2", (char*)0) < 0)
        {
            err_sys("execl error");
        }
    }
    if (waitpid(pid, NULL, 0) < 0)  /* parent */
    {
        err_sys("waitpid error");
    }
    exit(0);
}
