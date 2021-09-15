#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int)getpid());
    int rc = fork();
    if (rc < 0)
    {
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if (rc == 0) // child new process
    {
        printf("hello I am a child(pid:%d)\n", (int)getpid());
        char *myargs[3];
        myargs[0] = strdup("wc");
        myargs[1] = strdup("p3.c");
        myargs[2] = NULL;
        execvp(myargs[0], myargs); // runs word count
        printf("This shouldn't be printed");
    }
    else
    {
        int rc_wait = wait(NULL);
        printf("hello , I am parent of %d ,(rc_wait:%d) (pid:%d)\n", rc, rc_wait, (int)getpid());
    }

    return 0;
}