#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    printf("hello world(pid%d)\n", (int)getpid());
    int rc = fork();
    if (rc < 0)
    {
        // Failure
    }
    else if ()
    {
        /* code */
    }
    else
    {
    }
}