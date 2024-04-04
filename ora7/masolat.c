#include <stdio.h>
#include <stdlib.h>

void kiir (const int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Hány db számot szeretnél bevinni? ");
    scanf("%d", &n);
    int eredeti[n];
    for (int i = 0; i < n; ++i)
    {
        printf("%d. szám", i+1);
        scanf("%d", &eredeti[i]);
    }
    int masolat[n];
    for (int i = 0; i < n; ++i)
    {
        masolat[i] = abs(eredeti[i]);
    }

    printf("A bevitt számok abszolút értékei: ");
    kiir(n, masolat);

    printf("A megadott számok: ");
    kiir(n, eredeti);
    
    return 0;
}
