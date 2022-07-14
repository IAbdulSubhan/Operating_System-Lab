//   The execlp subroutine searches each of the directories listed in the PATH
// environment variable for the ls command, The execlp subroutine is not
// returned, unless the ls command cannot be executed.
  
  #include <unistd.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  main()
  {
     pid_t pid;
     char *pathvar;
     char newpath[1000];

     pathvar = getenv("PATH");
     strcpy(newpath, pathvar);
     strcat(newpath, ":u/userid/bin");
     setenv("PATH", newpath);

     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execlp("newShell", "newShell", NULL);
        printf("Return not expected. Must be an execlp error.n");
     }
  }
