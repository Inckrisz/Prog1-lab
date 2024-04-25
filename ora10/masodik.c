// restart -> resta$t
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MERET 100

void convert(char input[])
{
    char c = input[0];
    int hossz = strlen(input);
    for (int i = 1; i < hossz; ++i)
    {
        if (input[i] == c)
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


    return 0;
}
