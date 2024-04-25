#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Hiba, adj meg több argumentumot!");
        exit(1);
    }

    int min = INT_MAX;
    for (int i = 1; i < argc; ++i)
    {
        if (strlen(argv[i]) < min)
        {
            min = strlen(argv[i]);
        }
    }

    for (int i = 1; i < argc; ++i)
    {
        if (strlen(argv[i]) == min)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}
