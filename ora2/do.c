#include <stdio.h>

int main(int argc, char const *argv[])
{
    int szam;

    do 
    {
        printf("pozitiv egesz: ");
        scanf("%d", &szam);
    } while (szam <= 0);
    printf("A szam: %d\n", szam);

    return 0;
}
