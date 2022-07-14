//parent killing

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
int main()
{
    int pid;
    pid=fork();
    if(pid == 0)
    {
        printf("parent ID is : %d\n",getpid());
        printf("child ID is : %d\n",getpid());
        sleep(10);
        kill(pid,9);
        sleep(10);
        wait(NULL);
    }
    else
    {
        printf("I am parent\n");
        while (1);
    }
    
}