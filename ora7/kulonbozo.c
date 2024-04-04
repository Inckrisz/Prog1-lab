#include <stdio.h>

#define SIZE 100

int main(int argc, char const *argv[])
{
    int tomb[SIZE] = {0};
    int n;
    do 
    {
        printf("Szám: ");
        scanf("%d", &n);
        if (( n>= 1 && n <= 99) || n == 0)
        {
            tomb[n] = 1;
        }
        else 
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!");
        }
    }   while (n != 0);

    int counter = 0;
    for (int i = 1; i < SIZE; ++i)
    {
        if (tomb[i] == 1)
        {
            counter++;
        }
    }

    printf("%d különböző szám\n", counter);

    for (int i = 0; i < SIZE; ++i )
    {
        if (tomb[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
