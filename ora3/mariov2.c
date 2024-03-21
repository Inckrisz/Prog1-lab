#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;

    for (int i = 1; i <= 5; ++i)
    {
        int szokoz = n-i;
        int hash = i;
        for (int j = 1; j <= szokoz; ++j)
        {
            printf(" ");
        }
        for (int k = 1; k <= hash; ++k)
        {
            printf("#");
        }
        
        printf("\n");
    }

    return 0;
}
