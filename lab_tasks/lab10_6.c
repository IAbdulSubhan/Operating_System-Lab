#include <unistd.h>
#include <string.h>
#include <stdio.h>
//child killing

#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int pid;
void sigHandler(int sigNum)
{
    printf("Signal received is %d\n", sigNum);
    kill(pid,9);

    sleep(20);
}
void main()
{
    
    pid=fork();
    if(pid == 0)
    {
        printf("I am child\n%d",getpid());
        kill(getppid(),2);

        sleep(20);
    }
    else
    {
        printf("parent ID is : %d\n",getpid());
        signal(SIGINT,sigHandler);
        sleep(20);
    }
    
}