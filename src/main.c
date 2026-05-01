#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  char command[1024];
  // Flush after every printf
  setbuf(stdout, NULL);
  while(true) {
    printf("$ ");
    fgets(command, sizeof(command), stdin);
    command[strlen(command) - 1] = '\0';
    printf("%s: command not found\n", command);
  }
  return 0;
}
