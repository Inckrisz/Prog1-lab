#include <stdio.h>
#define SIZE 26


void line (char c, int n)
{
    for (int i = 0; i < n; ++i)
    {
        putchar(c);
    }
    printf("\n");
}

void feltolt (int n, char tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        tomb[i] = (char)((int)'a' + i);
    }
}

int main(int argc, char const *argv[])
{
//     hello
// ----------------------------------------
// world
    // printf("hello\n");
    // line('*', 20);
    // printf("world");
    char abece[SIZE];
    feltolt(SIZE, abece);
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%c, ", abece[i]);
    }


    return 0;
}
