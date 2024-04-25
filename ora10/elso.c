// ./a.out ASD 65 jó
// ./a.out ASD 64 kisebb
// ./a.out ASD 65 END hiba 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    // 
    // ./a.out ASD 65 4KJ4O
    //  A8368
    if (argc != 3)
    {
        fprintf(stderr,"Hiba, csak 2 argumentumot adjon meg!\n");
        exit(1);
    }
    int karakter = atoi(argv[2]);

    if (!((karakter >= 65 && karakter <= 90) || (karakter >= 97 && karakter <= 122)))
    {
        fprintf(stderr,"Hiba, a számnak 65-90 és 97-122 között kell lennie!\n");
        exit(1);
    }

    char* string = argv[1];
    int hossz = strlen(string);
    for (int i = 0; i < hossz; ++i)
    {
        if (string[i] == karakter)
        {
            printf("%c", karakter);
        }
        else 
        {
            printf("%d", string[i]);
        }
    }



    return 0;
}
