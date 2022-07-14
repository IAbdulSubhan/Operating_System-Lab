// Don’t think that kill() is to terminate a process only. It can send all kinds of signals.
#include <sys/types.h>
#include <signal.h>
int kill(pid_t pid, int sig);
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
printf("My PID: %d\n",getpid());
printf("Hello\n");
sleep(5);
kill(getpid(),SIGSEGV); // An invalid access to storage.
return 0;
}