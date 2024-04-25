#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void replace_char(char input[], char mit, char mire)
{
    int hossz = strlen(input);
    for (int i = 0; i < hossz; ++i)
    {
        if (input[i] == mit)
        {
            input[i] = mire;
        }
    }
}

int main(int argc, char const *argv[])
{
    FILE* fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "hiba!");
        exit(1);
    }

    char line[1000];
    double sum = 0.0;
    while(fgets(line,1000,fp) != NULL)
    {
        replace_char(line, ',', '.');
        double ertek = atof(line);
        sum += ertek;
    }

    printf("%.20lf", sum) ;

    return 0;
}
