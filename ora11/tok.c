#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* string;

#define BUFFER 100

int main(int argc, char const *argv[])
{
    // char input[] = "aa bb cc";
    // char* p;

    // p = strtok(input, " ");
    // printf("%s\n", p);
    // p = strtok(NULL, " ");
    // printf("%s\n", p);
    // p = strtok(NULL, " ");
    // printf("%s\n", p);

    FILE* fp = fopen("nevek.csv", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Nem sikerült megnyitni a fájlt!\n");
        exit(1);
    }

    char sor[BUFFER];
    char *p;
    string nev;
    int kor;
    string szak;

    while (fgets (sor, BUFFER, fp) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;

        if (strcmp(szak, "MI") == 0)
        {
            printf("Név: %s, Kor: %d, Szak: %s\n", nev, kor, szak);
        }

    }
    // aladar, 25
    // cecil, 21


    return 0;
}
