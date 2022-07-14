#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
void main()
{
	
	printf("--------------");
	printf("\nProcessID: ");
	printf("%d",getpid());

	printf("\nParentID: ");
	printf("%d",getppid());
	printf("\n");
	sleep(100);

}

