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
    
    if(strcmp(command, "exit") == 0){
      break;
    } else if(strncmp(command, "echo ", 5) == 0) {
      printf("%s\n", command + 5);
    } else {
      printf("%s: command not found\n", command);
    }
  }
  return 0;
}
