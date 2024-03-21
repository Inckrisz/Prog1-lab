#include <stdio.h>

void kiir_sor(int szokoz, int n)
{
    for (int i = 0; i < szokoz; ++i)
    {
        printf(" ");
    }
    for (int j = 0; j < n; ++j)
    {
        printf("*");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n = 5;

    for (int i = 1; i <= n; i += 2)
    {
        kiir_sor((n - i) / 2, i);
    }
    for (int i = n; i > 1; i -= 2 )
    {
        kiir_sor((n - i ) / 2, i);
    }

    return 0;
}
