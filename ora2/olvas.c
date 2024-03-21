#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int szam; //$wdokjadowajdowajd
    int total = 0;

        do 
        {
        
        printf("egész szám: ");
        scanf("%d", &szam);
        if (szam != 0)
        {
            total++;
        }

        }   while(szam != 0);

        printf("elemek száma: %d", total);
        
    

    // do 
    // {
        
    //     printf("egész szám: ");
    //     scanf("%d", &szam);
    //     total++;

    // }   while(szam != 0);

    return 0;
}
