#include <stdio.h>  // header file for input/output related functions
#include <unistd.h> //header file for your code's entry point to various constant
#include <stdlib.h> //header file for memory allocation, process control, conversions and others.
int main(int argc, char *argv[])    //The parameters to main represent the command line parameters provided to the program when it was started
{
    printf("PID of example.c = %d\n", getpid());  //printing the running process id 
    char *args[] = {"Hello", "C", "Programming", NULL}; //created an array of character pointers. The last element of this array should be NULL as the terminating point. 
    execv("./hello", args);    //execv require a list of arguments
                            // It is the number one platform when it comes to analyzing data, finding information,
                            // preparing charts, and presenting them to decision-makers.
    printf("Back to example.c");
    return 0;
}