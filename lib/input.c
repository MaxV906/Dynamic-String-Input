#include <stdio.h>
#include <stdlib.h>

char *input() {

  char *string = malloc(sizeof(char));
  int length = 1;

  char c;

  while (1) {

    char c = getchar();

    if (c == '\n') break;

    string[length - 1] = c;
    length++;
    string = realloc(string, sizeof(char) * length);

  }

  string[length] = '\0';

  return string;

}
