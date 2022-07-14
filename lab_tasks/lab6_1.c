// Fork code 2
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int p=fork();
p=fork();
if(p!=0)
{
    p=fork();
}
printf("process\n");
}