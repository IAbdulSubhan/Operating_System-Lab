#include <unistd.h>
#include <stdio.h>
int main()
{
    printf("X\n");
    char *av[] = {"ls","-al","/",0};
    execvp("ls",av);
    //char *x ----> A character pointer is essentially a string
    // Here ls is the name of the program
    printf("X\n");
}