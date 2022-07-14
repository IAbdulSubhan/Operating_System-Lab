#include<stdio.h>
#include<stdlib.h>

void main()
{
	char name[11];
	printf("Enter Your Name ");
	scanf("%s",name); 
	printf("My Name is %s ",name);
	system("mkdir test");
	system("ls"); 
	system("rmdir test");
	system("ls");

}

