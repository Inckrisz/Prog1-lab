#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <math.h>

int main(int argc, char const *argv[])
{
    string input;
    int max = 0;
    do 
    {
        input = get_string("Bináris szám (vége *): ");
        // 1111
        if (strcmp(input, "*") == 0)
        {
            break;
        }

        int hossz = strlen(input);
        int szam = 0;
        int helyiertek = 1;
        // printf("helyiertek: %d", helyiertek);
        // for (int i = 0; i < hossz; ++i)
        // {
        //     if (input[i] == '1')
        //     {
        //         szam += helyiertek;
                
        //     }
        //     helyiertek /= 2;
        // }
        for (int i = hossz - 1; i >= 0; i--)
        {
            if (input[i] == '1')
            {
                szam += helyiertek;
                
            }
            helyiertek *= 2;
            
        }
        printf("Decimális szám: %d\n", szam);
        if (szam > max)
        {
            max = szam;
        }

    }   while (strcmp(input, "*") != 0);

    printf("\n Maximális szám: %d", max);

    return 0;
}
