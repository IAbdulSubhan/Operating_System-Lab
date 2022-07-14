#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
int main(int argc, char* argv[])
{
    if(argc!=2)
    {
    printf("Error: Run like this:\n");
    printf("%6s name-of-new-file\n", argv[0]);
    return 1;
    }
    char *path = argv[1];
    int fd= open(path,O_RDONLY);
    if(argc==-1)
    {
    printf("File Does not Exist\n");
    return 1;
    }
    char buffer[200];
    read(fd, buffer, sizeof(buffer)-1);
    printf("Contents of file are:\n");
    printf("%s\n", buffer);
    close(fd);  
    return 0;
}