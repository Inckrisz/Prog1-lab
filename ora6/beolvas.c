#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"
#define SIZE 100

int main(int argc, char const *argv[])
{
    // char text[SIZE];
    // printf("Írj be egy szöveget: ");
    // fgets(text, SIZE, stdin); // \n
    // // text[strlen(text)-1] = '\0';
    // printf("Szöveg: %s", text);

    // string s = "20";
    // int x = atoi(s) + 5;
    
    if (argc == 1)
    {
        printf("Adj meg parancssori argumentumot!");
        exit(1);
    }

    // string nev = argv[1];

    int kivono = atoi(argv[2]);

    // if (argc == 2)
    // {
    //     printf("Adj meg számokat is!");
    //     exit(2);
    // }

    for (int i = 3; i < argc; ++i)
    {
        kivono -= atoi(argv[i]);
    }

    printf("Hello %s\n", argv[1]);
    printf("Szám: %d", kivono);


    return 0;
}
