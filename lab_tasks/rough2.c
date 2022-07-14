#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int fd;
    char buffer[100];
    char msg[50]="Hello from txt\n";
    fd=open("check.txt",O_RDWR);
    printf("fd = %d", fd);
    if(fd != -1)
    {
        printf("file open successfully\n");
        write(fd,msg,sizeof(msg));
        lseek(fd,0,SEEK_SET);
        read(fd, buffer, sizeof(msg));
        printf("\n\n%sThis is from file--> \n",buffer);
        close(fd);
    }   
    return 0;
}