#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int p;
    char *arg[] = {"./exec", 0};
    char *arg1[] = {"./exec", 0};
    p=fork();
    if (p == 0)
    {
    printf("-------Child Process\n-------");
    execve(arg[0], arg1]);
    printf("Child Process\n");
    }
    else
    {
    printf("Parent Process\n");
    }
}