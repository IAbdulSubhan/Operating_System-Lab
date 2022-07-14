#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pip[2];
    int result;
    result = pipe(pip);
    if (result == -1)
    {
    perror("pipe");
    exit(1);
    }
    printf("Success Status: %d\n", result);
    return 0;
}