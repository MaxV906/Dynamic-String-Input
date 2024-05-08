#include <stdlib.h>

void string_scanner(char** string_pointer) {

    int length = 0; 
    char new_char;

    *string_pointer = malloc(sizeof(char));

    if (*string_pointer == NULL) {
        printf("Failed to allocate space\n");
        exit(1);
    }

    while (1) {

        new_char = getchar();

        if (new_char == '\n' || new_char == EOF) {
            break;
        }

        (*string_pointer)[length] = new_char; 
        length++;

        *string_pointer = realloc(*string_pointer, sizeof(char) * (length + 1));

        if (*string_pointer == NULL) {
            printf("Failed to allocate space\n");
            exit(1);
        }

    }

    (*string_pointer)[length] = '\0';

}