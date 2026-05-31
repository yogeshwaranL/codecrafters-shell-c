#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  // Flush after every printf
  setbuf(stdout, NULL);

  // Buffer to hold input command
  char cmd_in[256];

  printf("$ ");

  // Read the user command into cmd_in, it contains newline
  fgets(cmd_in, sizeof(cmd_in), stdin);

  // Remove newline from cmd_in
  cmd_in[strlen(cmd_in) - 1] = '\0';

  printf("%s: command not found\n", cmd_in);

  return 0;
}
