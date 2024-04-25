#include <stdio.h>
#include "prog1.h"
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    string input;
    int max = 0;

    do 
    {
        input = get_string("Bináris szám (* végjelig): ");
        int hossz = strlen(input);
        // 1111 4 
        // 8421
    
        int helyiertek = pow(2, hossz -1);
        int szam = 0;
        for (int i = 0; i < hossz; ++i)
        {
            if (input[i] == '1')
            {
                szam += helyiertek;
            }
            helyiertek /= 2;
        }

        printf("Decimális szám: %d\n", szam);

        if (szam > max)
        {
            max = szam;
        }




    }   while (strcmp(input, "*") != 0);

    printf("Max: %d", max);
    
    return 0;
}
