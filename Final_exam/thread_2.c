#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *print_message_function( void *ptr );
int main()
{
pthread_t thread1, thread2;
//In the following code we are assigning the address of
//the strings to the pointer *message1 and *message2 .
char message[15]="Thread 1";
char *message1 = message;
//char *message1 = "Thread 1";
char *message2 = "Thread 2";
int return_value1, return_value2;
/* Create independent threads each of which will execute function */
return_value1 = pthread_create( &thread1, NULL, print_message_function, message1);
return_value2 = pthread_create( &thread2, NULL, print_message_function, (void*) message2);
/* Wait till threads are complete before main continues. Unless we */
/* wait we run the risk of executing an exit which will terminate */
/* the process and all threads before the threads have completed. */
pthread_join( thread1, NULL);
pthread_join( thread2, NULL);
printf("Thread 1 returns: %d\n",return_value1);
printf("Thread 2 returns: %d\n",return_value2);
exit(0);
return 0;
}
void *print_message_function( void *ptr)
{
char *message;
message = (char *) ptr;
// type casting of pointer to char
printf("%s \n", message);
}