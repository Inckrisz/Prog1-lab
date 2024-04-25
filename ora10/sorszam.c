#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines (const char* fname)
{
    
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba nem létezik %s!\n", fname);
        exit(1);
    }
    int counter = 0;
    char buffer[1000];

    while (fgets(buffer, 1000, fp) != NULL)
    {
        ++counter;
    }

    return counter;

}

int main(int argc, char const *argv[])
{
    char* fname = argv[1];
    printf("%d", get_number_of_lines(fname));


    return 0;
}
