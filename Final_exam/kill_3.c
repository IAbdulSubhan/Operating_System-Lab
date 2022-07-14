// kill2.c
#include <unistd.h>
#include <stdio.h>
#include<signal.h>
#include <sys/types.h>
int main()
{
int pid;
pid = fork();
if(pid == 0)
{
printf("Child PID = %d\n", pid);
printf("I am the Child with PID = %d\n", getpid());
}
else
{
printf("Parent of = %d\n", pid);
printf("I am the Parent with PPID = %d\n",getppid());
kill(pid,SIGTERM);
sleep(120);
}
}