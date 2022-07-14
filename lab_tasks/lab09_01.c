#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
int main()
{
    int pfd[2];
    pipe(pfd);
    printf("%d\n",pfd[0]);
    printf("%d\n",pfd[1]);
}