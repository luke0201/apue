#include "apue.h"
#include <sys/wait.h>

#define APUE_DIR "/Users/luke0201/Documents/programming/apue"

char* env_init[] = {"USER=unknown", "PATH=/tmp", NULL};

int main(void)
{
    pid_t pid;

    if ((pid = fork()) < 0)
    {
        err_sys("fork error");
    }
    else if (pid == 0)  /* specify pathname, specify environment */
    {
        if (execle(APUE_DIR "/ch8/fig8.17", "echoall", "myarg1", "MY ARG2", (char*)0, env_init) < 0)
        {
            err_sys("execle error");
        }
    }

    if (waitpid(pid, NULL, 0) < 0)
    {
        err_sys("wait error");
    }

    if ((pid = fork()) < 0)
    {
        err_sys("fork error");
    }
    else if (pid == 0)  /* specify filename, inherit environment */
    {
        if (execlp("fig8.17", "echoall", "only 1 arg", (char*)0) < 0)
        {
            err_sys("execlp error");
        }
    }

    exit(0);
}
