#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// . Tekintsük a mozik.csv szöveges állományt. A fájl egyes sorai a következő adatokat tartalmazzák:
// film IMDb értékelése, film címe, szavazatok száma. A sorokban lévő adatok pontosvesszővel vannak
// egymástól elválasztva.
// Írjon programot, ami kiírja a képernyőre azon filmek címeit, melyekre legalább fél millióan szavaztak!
// Informatív módon azt is írja ki, hogy hány ilyen film található a mozik.csv állományban!


int main(int argc, char const *argv[])
{
    char* fname = "mozik.csv";
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba a fájl beolvasása során!\n");
        exit(1);
    }
    char line[256];
    int counter = 0;
    while (fgets(line,256, fp) != NULL)
    {
        printf("hossz: %d\n", strlen(line));
        line[strlen(line) -1] = '\0';
        char* p;
        char* nev; char* ertekeles; int szavazat;
        p = strtok(line, ";");
        ertekeles = p;
        p = strtok(NULL, ";");
        nev = p;
        p = strtok(NULL, ";");
        szavazat = atoi(p);
        if (szavazat > 500000)
        {
            counter++;
            printf("%s\n", nev);
        }
    }

    printf("%d ennyi film található.", counter);

    fclose(fp);


    return 0;
}
