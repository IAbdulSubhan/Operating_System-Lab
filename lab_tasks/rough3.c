#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    printf("Child \n");

    else
    printf("parent \n");
}