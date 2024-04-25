#include <stdio.h>
#include <stdlib.h>

#define MERET 500

int randint (int also, int felso)
{
    int szam = rand();
    int intervallum = felso - also + 1;
    return also + (szam % intervallum);
}

void feltolt(int tomb[])
{
    for (int i = 0; i < MERET; ++i)
    {
        tomb[i] = randint(100,2024);
    }
}

int main(int argc, char const *argv[])
{
    srand(2024);
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

    printf("%.1lf", (double) sum / counter);

    return 0;
}
