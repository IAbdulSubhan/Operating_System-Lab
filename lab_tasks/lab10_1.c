#include <unistd.h>
#include <string.h>
#include <stdio.h>
//child killing

#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
int main()
{
    int pid;
    pid=fork();
    if(pid == 0)
    {
        printf("I am child\n");
        while (1);
    }
    else
    {
        printf("parent ID is : %d\n",getpid());
        printf("child ID is : %d\n",pid);
        sleep(10);
        kill(pid,9);
        sleep(10);
        wait(NULL);
    }
    
}