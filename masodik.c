#include <stdio.h>
#include "prog1.h"
#include <string.h>

#define MERET 100

void convert (char input[])
{
    char c = input[0];
    printf("'%c'", c);
    int hossz = strlen(input);
    // asd\n\0
    // printf("c: %c", input[hossz-1]);
    // input[hossz-1] = '\0'; 
    hossz = strlen(input);
    for (int i = 0; i < hossz; ++i)
    {
        if (input[i] == c && i != 0)
        {
            input[i] = '$';
        }
    }


}

int main(int argc, char const *argv[])
{
    char input[MERET];
    printf("Szöveg: ");
    fgets(input, MERET, stdin);
    convert(input);
    printf("Kimenet: %s", input);

    for (int i = 0; i < strlen(input); ++i)
    {
        printf("%c ", input[i]);
    }


    return 0;
}
