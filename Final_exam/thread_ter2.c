#include <pthread.h> /* include file for pthreads - the 1st */
#include <stdio.h>
/* include file for printf()
*/
#include <stdlib.h>
void *Thread(void *string)
{
int i;
for (i=0; i<10; i++)
printf("%s\n", (char *)string);
pthread_exit(NULL);
}
int main()
{
char *e_str = "Hello!";
char *f_str = "FAST !";
pthread_t e_th;
pthread_t f_th;
int rc;
rc = pthread_create(&e_th, NULL, Thread, (void *)e_str);
if (rc)
exit(-1);
rc = pthread_create(&f_th, NULL, Thread, (void *)f_str);
if (rc)
exit(-1);
pthread_exit(NULL);
}