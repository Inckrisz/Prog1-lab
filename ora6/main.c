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
    for (char c = 'a'; c <= 'z'; ++c)
    {
        tomb[c-'a'] = c;
    }
    // tomb[SIZE] = '\0';
}

int main(int argc, char const *argv[])
{
//     hello
// ----------------------------------------
// world
    // printf("hello\n");
    // line('*', 20);
    // printf("world");
    // string vmi = "ajsdjaw";
    char abece[SIZE+1];
    feltolt(SIZE, abece);
    // for (int i = 0; i < SIZE; ++i)
    // {
    //     printf("%c, ", abece[i]);
    // }
    printf("%s\n", abece);


    return 0;
}
