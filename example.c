#include <stdio.h>
#include "scanner.h"

int main() {

    char* new_string;

    string_scanner(&new_string);

    printf("\n%s\n", new_string);
    free(new_string);

    return 0;
}