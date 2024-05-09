#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1000

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

int sorok_szama (const char* fname)
{
    int counter = 0;
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr,"Nem sikerült megnyitni a fájlt!\n");
        exit(1);
    }
    char line[BUFFER];
    while (fgets(line, BUFFER, fp) != NULL)
    {
        ++counter;
    }

    fclose(fp);
    return counter;

}

void kiir(int n, int* tomb)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", tomb[i]);
    }
}

int* szamok_beolvasasa(const char* fname, int sorszam)
{
    int *tomb = malloc(sorszam*sizeof(int));
    int index = 0;
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr,"Hiba a fájl megnyitásakor!\n");
        exit(1);
    }
    char line[BUFFER];
    while (fgets(line, BUFFER, fp) != NULL)
    {
        tomb[index] = atoi(line);
        index++;
    }
    fclose(fp);
    return tomb;

}

int main(int argc, char const *argv[])
{
    const char* fname = "millions.txt";
    int sorszam = sorok_szama(fname);
    int * szamok = szamok_beolvasasa(fname, sorszam);
    quicksort(szamok, 0, sorszam-1);
    kiir(sorszam, szamok);
    free(szamok);


    return 0;
}