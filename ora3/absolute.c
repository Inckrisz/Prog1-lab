#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

// int my_abs(int n)
// {
//     // if (n > 0)
//     // {
//     //     return n;
//     // }
//     // else 
//     // {
//     //     return -1*n;
//     // }
//     return (n > 0) ? n : -n;
// }

// int negyzet_kerulet(int n)
// {
//     return 4*n;
// }

// int negyzet_terulet(int n)
// {
//     return n*n;
// }

// int teglalap_terulet(int a, int b)
// {
//     return 2*(a+b);
// }

// int teglalap_kerulet(int a, int b)
// {
//     return a*b;
// }

// double kor_kerulete(double r)
// {
//     return 2*r*PI;
// }

// double kor_terulete(double r)
// {
//     return r*r*PI;
// }



int main(int argc, char const *argv[])
{
    // int n = -5;

    // printf("%d\n", my_abs(n)); // 5:5  0:0 -5:5

    // printf("negyzet kerulete, terulete: %d %d", negyzet_kerulet(5), negyzet_terulet(5));
    // printf("teglalap kerulete, terulete: %d %d", teglalap_kerulet(5, 7), teglalap_terulet(5,7));

    int n;
    printf("Irj be egy számot(0 kilépés): ") ;
    while (1)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
    }
    // KIMENET: Irj be egy számot 0 kilépés: 5, -5, -6, 10, 0
    // Pozitiv: 2
    // Negativ: 2

    return 0;
}
