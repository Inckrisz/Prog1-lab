#include <stdio.h>

int main(int argc, char const *argv[])
{
    int szam;
    printf("Szám: ");
    scanf("%d", &szam);
    if (szam > 0)
    {
        printf("pozitiv");
    }
    else if(szam < 0)
    {
        printf("negatív");
    }
    else 
    {
        printf("nulla");
    }
    return 0;
}
