#include <unistd.h>
#include <stdio.h>

int main()
{
    int p;
    char *file = "usr/bin/ps/";
    char *arg1="ps";
    char *arg2="-f";

    p=fork();
    if (p == 0)
    {
    printf("-------Child Process\n-------");
    execlp(file, arg1,arg2,NULL);
    printf("Child Process\n");
    }
    else
    {
    printf("Parent Process\n");
    }
}
