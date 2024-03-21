#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d, ", tomb[i]);
    }
}

int osszeg(int n, int tomb[])
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += tomb[i];
    }
    return sum;
}

float atlag(int n, const int tomb[])
{
    int average = osszeg(n, tomb);

    return (double) average /  n;
}

void megfordit (int n, int tomb[])
{
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}

int palindrom (int n, int tomb[])
{
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        if (tomb[i] == tomb[j])
        {
            ++i;
            --j;
        }
        else 
        {
            return 0;
        }
    }
    return 1;
}



int main(int argc, char const *argv[])
{
    int tomb[3] = {1,2,1};
    int meret = 3;

    
    // int sum = osszeg(meret, tomb);
    // float average = atlag(meret, tomb);
    // printf("sum=%d\n", sum);
    // printf("average=%f\n", average);
    // kiir(meret, tomb);
    // int a = 6;
    // int b = 9;
    // printf("előtte a=%d b=%d\n", a, b);
    // int tmp = a;
    // a = b;
    // b = tmp;
    // printf("utána a=%d b=%d\n", a, b);
    // printf("\nelőtte\n");
    // kiir(meret, tomb);
    // printf("\nutána\n");
    // megfordit (meret, tomb);
    // kiir(meret, tomb); 

    if (palindrom(meret, tomb)== 1)
    {
        printf("A tömb palindróm\n");
    }
    else 
    {
        printf("A tömb nem palindróm\n");
    }

    return 0;
}
