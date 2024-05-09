#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    FILE* fp = fopen("autok.csv", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba a fájl megnyitásakor!\n");
        exit(1);
    }

    char sor[100];
    int index = 0;
    while (fgets (sor, 100, fp) != NULL)
    {
        if (index == 0)
        {
            index++;
            continue;
        }

        printf("%s", sor);
        index++;
    }


    return 0;
}
