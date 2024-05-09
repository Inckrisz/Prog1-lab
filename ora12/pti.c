#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BUFFSIZE 100

typedef char* string;

void capitalize (char text[])
{
    // int hossz = strlen(text);
    // if (hossz > 0 )
    // {
    //     text[0] = toupper(text[0]);
    //     for (int i = 1; i < hossz; ++i)
    //     {
    //         text[i] = tolower(text[i]);
    //     }
    // }

    char *p = text;
    if (*p != '\0')
    {
        *p = toupper(*p);
        ++p;
        while (*p)
        {
            *p = tolower(*p);
            ++p;
        }
    }

}

typedef struct {
    char nev[50];
    int kor;
    char szak[5];
} Hallgato;

int feltolt (const char* fname, const int n, Hallgato tomb[])
{
    int index = 0;
    // fájl megnyitása
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba a fájl megnyitásakor!\n");
        exit(1);
    }

    // beolvasni az adatokat
    char sor[BUFFSIZE];
    char *p;
    string nev;
    int kor; 
    string szak;

    while (fgets(sor, BUFFSIZE, fp) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;
        Hallgato h;
        strcpy(h.nev, nev);
        h.kor = kor;
        strcpy(h.szak, szak);

        tomb[index] = h;

        index++;

    }
    fclose(fp);

    return index;
}

void kiir_hallgato (Hallgato *h)
 {
    // aladar,25,MI
    capitalize(h->nev);
    printf("%s, ", (h->nev));
 }

 void lowercase (char text[])
 {
    int hossz = strlen(text);
    for (int i = 0; i < hossz; ++i)
    {
        text[i] = tolower(text[i]);
    }
 }

 int kiszur_ptisek(const int n, Hallgato tomb[], Hallgato ptisek[])
 {
    // ahol a szak PTI, pti, szak -> kicsi PTI -> pti
    int index = 0;
    for (int i = 0; i < n; ++i)
    {
        Hallgato h = tomb[i];
        lowercase(h.szak);
        if (strcmp (h.szak, "pti") == 0)
        {
            
            ptisek[index] = tomb[i]; 
            ++index;
        }
    }
    return index;
 }

 void egyszeru_kivalasztasos_rendezes(Hallgato tomb[], int meret)
{
    int i, j; 
    Hallgato temp;

    fprintf(stderr, "# egyszeru kivalasztasos rendezes\n");

    for (i = 0; i < meret - 1; ++i)
    {
        for (j = i + 1; j < meret; ++j)
        {
            if (strcmp (tomb[j].nev, tomb[i].nev) < 0)
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    Hallgato hallgatok[100];
    int ertekek = feltolt("nevek.csv", 100, hallgatok);  
    for (int i = 0; i < ertekek; ++i)
    {
        kiir_hallgato(&hallgatok[i]);
    }

    printf("----------\n");

    Hallgato ptisek[100];
    int ptisek_szama = kiszur_ptisek (100, hallgatok, ptisek);
    for (int i = 0; i < ptisek_szama; ++i)
    {
        kiir_hallgato(&ptisek[i]);
    }

    egyszeru_kivalasztasos_rendezes (ptisek, ptisek_szama);
    printf("----------\n");

    for (int i = 0; i < ptisek_szama; ++i)
    {
        kiir_hallgato(&ptisek[i]);
    }






  


    return 0;
}
