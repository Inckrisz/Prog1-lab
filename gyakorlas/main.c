 #include <stdio.h>
 #include <stdlib.h>
 #include "prog1.h"
 #include <string.h>
 #include <time.h>
 
 
 
 // Írj egy programot, amely véletlenszerűen generál a parancssori argumentumként megadott számú egész számokat egy adott intervallumban, a felhasználó adja meg az intervallumot, majd ezeket a számokat tárolja egy tömbben. A generálás addig tart, amíg a felhasználó "-"-t nem ad meg.
// A program után írja ki a generált számokat a tömbben, majd számolja meg és írja ki a páros és páratlan számok számát. Ha nem ad meg parancssori argumentumot kilépés hibaüzenettel
// Példa bemenetre: ./a.out 5 (akkor 5 számot generál)
// Intervallum alja: 5
// Intervallum teteje: 100
// Generált számok: 9 8 14 75 99
// Intervallum alja: 10
// Intervallum teteje: 200
// Generált számok: 199 198 197 100 11
// Intervallum alja: -
// Bye!
// Páros számok: 4
// Páratlan számok: 6 
// használandó függvények, eljárások
// int randint (int also, int felso) generál egy véletlen számot
// void kiir (int n, int tomb) kiírja a generált számokat
// void feltolt (int n, int tomb)
// int megszamol (int n, int tomb, 2)
// 


int randint(int also, int felso)
{
    int szam = rand();
    int intervallum = felso - also + 1;
    return also + (szam % intervallum);
}

void kiir (int n, int tomb[])
{
    printf("Generált számok: ");
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            printf("%d", tomb[i]);
            continue;
        }
        printf(", %d", tomb[i]);
    }
}

int megszamol (int n, int tomb[], int modulo)
{
    int szamolo = 0;
    for (int i = 0; i < n; ++i)
    {
        if (tomb[i] % 2 == modulo)
        {
            ++szamolo;
        }
    }
    return szamolo;
}

void feltolt (int n, int tomb[], int also, int felso)
{
    for (int i = 0; i < n; ++i)
    {
        tomb[i] = randint(also, felso);
    }
}


int main(int argc, char const *argv[])
{
    srandom(1920);
    
    if (argc != 2)
    {
        printf("Nem adtál meg parancssori argumentumot!");
        exit(1);
    }

    // for (int i = 0; i < 100; ++i)
    // {
    //     if (i == 0)
    //     {
    //         printf("%d", randint(0,100));
    //     }
    //     printf(", %d", randint(0,100));
    // }

    string mer = argv[1];

    int meret = atoi(mer);
    int paros = 0; int paratlan = 0;

    // printf("%d", meret);
    while (1)
    {
        int tomb[meret];
        int alsoi, felsoi;
        string also = get_string("\nIntervallum alja: ");
        if (strcmp(also,"-") == 0)
        {
            break;
        }
        alsoi = atoi(also);
        string felso = get_string("Intervallum teteje: ");
        if (strcmp(felso,"-") == 0)
        {
            break;
        }
        felsoi = atoi(felso);
        feltolt(meret, tomb, alsoi, felsoi);
        kiir(meret, tomb);
        int parosnovelo = megszamol(meret, tomb, 0);
        int paratlannovelo = megszamol(meret, tomb, 1);
        paros += parosnovelo;
        paratlan += paratlannovelo;
        printf("\nPáratan: %d Páros: %d\n", paratlan, paros);
    }

    printf("\nBye\n");
    printf("\nPáros számúak: %d", paros);
    printf("\nPáratlan számúak: %d", paratlan);

    

    
    return 0;
}
