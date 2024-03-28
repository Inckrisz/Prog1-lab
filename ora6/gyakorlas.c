 #include <stdio.h>
 #include <stdlib.h>
 #include "prog1.h"
 #include <string.h>
 #include <time.h>

 // Írj egy programot, amely véletlenszerűen generál a parancssori argumentumként megadott számú egész számokat
 // egy adott intervallumban, a felhasználó adja meg az intervallumot, majd ezeket a számokat tárolja egy tömbben. 
 //A generálás addig tart, amíg a felhasználó "-"-t nem ad meg.
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
// int randint (int also, int felso) generál egy véletlen számot alsó 5 felső 100 -> 22
// void kiir (int n, int tomb) kiírja a generált számokat
// void feltolt (int n, int tomb)
// int megszamol (int n, int tomb, 2)
// 

int megszamol(int n, int tomb[], int mod)
{
    int counter = 0;
    for (int i = 0; i < n; ++i)
    {
        if (tomb[i] % 2 == mod)
        {
            ++counter;
        }
    }
    return counter;
}

int randint (int also, int felso)
{
    int szam = rand();
    int intervallum = felso - also + 1;

    return also + (szam % intervallum);
}

void feltolt (int n, int tomb[], int also, int felso)
{
    for (int i = 0; i < n; ++i)
    {
        tomb[i] = randint(also, felso);
    }
}

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
}


int main(int argc, char const *argv[])
{
    srand(1920);
    int meret = atoi(argv[1]);

    int tomb[meret];
    int paratlan = 0;
    int paros = 0;

    while (1)
    {
        string also = get_string("Intervallum alja: ");
        
        int alsoi = atoi(also);
        string felso = get_string("Intervallum teteje: ");
        
        int felsoi = atoi(felso);
        feltolt(meret, tomb, alsoi, felsoi);
        kiir(meret, tomb);
        if (strcmp(also, "-") == 0 || strcmp(felso, "-") == 0)
        {
            break;
        }
        paratlan += megszamol(meret, tomb, 1);
        paros += megszamol(meret, tomb, 0);
    }
    printf("Páros számok: %d, Páratlan számok: %d", paros, paratlan);
    printf("\nBye\n");
    
    return 0;
}
