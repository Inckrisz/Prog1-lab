#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;

    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
