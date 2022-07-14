#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
int fd, bw, br;
char *buffer=(char*)calloc(NULL, BUFSIZ);
fd = open("/tmp/foo.txt",O_CREAT|O_RDWR);
br = read(0,buffer, BUFSIZ);
bw = write(fd,buffer,BUFSIZ);
close(fd);
return 0;
}