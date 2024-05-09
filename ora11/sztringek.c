#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>

typedef char* string;

int main(int argc, char const *argv[])
{
    char input[] = "https://manual.cs50.io/3/strcpy";
    char input2[] = " asd";
    // printf("hossz = %d\n", strlen(input));
    // string valami = "aaaa";
    // printf("strcmp: %d", strcmp(input, valami));

    // char *strcpy(char *dest, char *src);

    // char* p = malloc(strlen(input) + 1);
    // strcpy(p, valami);
    // printf("\n %s ", p);
    // free(p);

    // strcat(input, input2);
    // printf("%s %s", input, input2);

    char *p = strfry(input);
    printf("%s",p);





    return 0;
}
