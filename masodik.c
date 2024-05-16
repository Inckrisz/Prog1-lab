#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* swapcase(const char* original) {
    int len = strlen(original);
    char* new_string = (char*) malloc(sizeof(char) * (len + 1)); 
    if (new_string == NULL) {
        fprintf(stderr, "Memóriafoglalási hiba.\n");
        exit(1);
    }

    for (int i = 0; i < len; ++i) {
        if (islower(original[i])) {
            new_string[i] = toupper(original[i]);
        } else if (isupper(original[i])) {
            new_string[i] = tolower(original[i]);
        } else {
            new_string[i] = original[i];
        }
    }
    original = new_string;    

    return original;
}

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Hiba! Adj meg egy sztringet!\n");
        exit(EXIT_FAILURE);
    }

    char* input = argv[1];
    char* swapped = swapcase(input);
    printf("%s\n", swapped);
    free(swapped);

    return 0;
}
