/* Includes */
#include <unistd.h>
/* Symbolic Constants */
#include <sys/types.h> /* Primitive System Data Types */
#include <errno.h>/* Errors */
#include <stdio.h>/* Input/Output */
#include <stdlib.h>/* General Utilities */
#include <pthread.h> /* POSIX Threads */
#include <string.h>
/* String handling */
/* prototype for thread routine */
void print_message_function ( void *ptr );
/* struct to hold data to be passed to a thread this shows how multiple data items can be passed to
a thread */
typedef struct str_thdata
{
int x;
int y;
int z;
} thdata;
int main()
{
pthread_t thread1; /* thread variables */
thdata Omar;
/* structs to be passed to threads */
/* initialize data to pass to thread 1 */
Omar.x=1;
Omar.y=2;
Omar.z=3;
/* create threads 1*/
pthread_create (&thread1, NULL, (void *) &print_message_function, (void *) &Omar);
/* Main block now waits for both threads to terminate, before it exits If main block exits, both
threads exit, even if the threads have not
finished their work */
pthread_join(thread1, NULL);
exit(0);
}
/**
* print_message_function is used as the start routine for the threads used it accepts a void pointer
**/
void print_message_function ( void *ptr )
{
thdata *my_data;
my_data = (thdata *) ptr; /* type cast to a pointer to thdata */
/* do the work */
printf("X: %d, Y: %d, Z: %d\n", my_data->x, my_data->y, my_data->z);
pthread_exit(0); /* exit */
} /* print_message_function ( void *ptr ) */
