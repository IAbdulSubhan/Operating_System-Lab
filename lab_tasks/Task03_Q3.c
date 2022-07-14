#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char str[20]; 
    char str1[20]; 
    // char str2[20];    //create an empty string to store number
   
    int pid,number,number2;
    pid=fork();
    if (pid==0)
    {
        sleep(2);
        printf("\nfrom child-->You entered: %d", number2);
        printf("\n\n%schild-->str=",str);
        // wait(10);
        sleep(2);
        // wait(NULL);
        printf("I am child\n");

        printf("\n\n%schild-->str=",str);


        // printf("\nYou entered: %d", number2);

        number=number+1;
        printf("\n\n%dchild-->number=",number);
        sprintf(str1, "%d", number);

        printf("\n\nchild-->Ok\n");
        // printf("\nYou entered: %d", number2);
        // printf("\nOk\n");

        char *filename = argv[1];
        int fd = open(filename, O_WRONLY|O_CREAT, 0666);
        size_t length = strlen(str);
        write(fd, str1, length);
        close(fd);
        printf("\n");
        exit(0);
    }
    else
    {
        printf("I am parent\n");
        printf("from parent--> Enter the number: ");
        scanf("%d", &number);
        printf("\nfrom parent-->You entered: %d", number);
        number2=number;
        sprintf(str, "%d", number); ////make the number into string using sprintf function

        char *filename = argv[1];
        int fd = open(filename, O_WRONLY|O_CREAT, 0666);
        size_t length = strlen(str);
        write(fd, str, length);
        close(fd);
        printf("\n");
    //    while(wait(NULL) > 0);

    }
    return 0;
}