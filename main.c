#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
  pid_t pid;

  pid = fork();
  if(pid > 0)
  {
      printf("PID: %d", pid);
      sleep(11);
  }
  else if(pid == 0)
  {
      exit(0);
  }
  return 0;
}