#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
int main()
{
    int pid;
    int pfd[2];
    // printf("%d\n",pfd[0]);
    // printf("%d\n",pfd[1]);
    char aString[20]; // Temporary storage
    pipe(pfd); // create our pipe
    pid = fork();
    if (pid == 0) // For child
    {
        write(pfd[1], "Hello", 5); // Write onto pipe
    }
    else // For parent
    {
    read(pfd[0], aString, 5); // Read from pipe
    // printf("%s\n",aString);
    }

    printf("%s\n",aString);
}