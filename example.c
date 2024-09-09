#include <stdio.h>
#include <stdlib.h>
#include "lib/input.h"

int main() {

    char *new_string = input();

    printf("\n%s\n", new_string);
    free(new_string);

    return 0;
}
