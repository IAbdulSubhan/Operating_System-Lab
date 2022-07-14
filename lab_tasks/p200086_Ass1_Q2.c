 #include <sys/types.h>
  #include <unistd.h>
  #include <stdio.h>

  void main()
  {
     pid_t pid;
     char *const vp[2] = {"STEP", NULL};

     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execle("/u/userid/bin/newShell", "newShell", NULL, vp); //NULL-terminated argument list, specify the new process environment
        printf("Return not expected. Must be an execle() error.n");
     }
  }
