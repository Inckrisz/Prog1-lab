#include <stdio.h>
#include <stdlib.h>

#define MERET 5000

int randint (int also, int felso)
{
    int intervallum = felso - also + 1;
    int szam = rand();
    return also + (szam % intervallum);
}

// 100, 2025,
// intervallum = 1925
// 1924 % 1925 = 1924, 100 + 1924 = 2024

void feltolt(int szamok[])
{
    for (int i = 0; i < MERET; ++i)
    {
        szamok[i] = randint(100, 2024);
    }
}

int main(int argc, char const *argv[])
{
    srand(2025);
    int tomb[MERET];
    feltolt(tomb);
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < MERET; ++i)
    {
        if (tomb[i] % 3 == 0)
        {
            counter++;
            sum += tomb[i];
        }
    }

    printf("%.2lf", (double) sum / counter);
    

    return 0;
}
