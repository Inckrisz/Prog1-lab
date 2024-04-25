#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* input = "in.txt";
const char* output = "out.txt";

int main(int argc, char const *argv[])
{
    FILE* fp = fopen(input,"r");
    FILE* out = fopen(output,"w");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba nem létezik az %s!\n", input);
        exit(1);
    }
    if (out == NULL)
    {
        fprintf(stderr, "Hiba nem létezik az %s!\n", output);
        exit(1);
    }
    
    char line[1000];
    while (fgets(line, 1000, fp) != NULL)
    {
        line[strlen(line)-1] = '\0';
        double ertek = atof(line);
        if (ertek > 0.5)
        {
            fprintf(out,"%s\n", line);
        }

    }

    fclose(fp);
    fclose(out);

    return 0;
}
