#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
	char str1[]="listdirectory";
	char str2[]="createfile";
	char str3[]="makefolder";
	int result1 = strcmp(str1, argv[1]);
	int result2 = strcmp(str2, argv[1]);
	int result3 = strcmp(str3, argv[1]);

	if (result1 == 0)
	{
		system("ls -l");
	}
	if (result2 == 0)
	{
		system("touch file");
		system("ls"); 
	}
	else if (result3 == 0)
	{
		system("mkdir folder");
		system("ls"); 
	}


}
