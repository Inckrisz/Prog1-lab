#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Hiba! Pontosan 2 paramétert adjon meg!");
        exit(1);
    }
    int karakter = atoi(argv[2]);
    if ( !((karakter >= 65 && karakter <= 90) || (karakter >= 97 && karakter <= 122)) )
    {
        printf("Hiba! A megadott szám nem a 65-90 vagy a 97-122 közé esik!");
    }
    
    string input = argv[1];

    int hossz = strlen(input);
    for (int i = 0; i < hossz; ++i)
    {
        char kar = input[i];
        if (kar == karakter)
        {
            printf("%c", karakter);
        }
        else 
        {
            printf("%d", kar);
        }
    }
    
    return 0;


}


