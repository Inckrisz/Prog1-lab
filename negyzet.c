#include <stdio.h>

int main()
{
    printf("Írd be a négyzet oldalát: ");
    int n;
    scanf("%d", &n);
    int kerulet = n*n;

    printf("A négyzet területe: %d\n",kerulet);
    printf("A négyzet kerülete: %d\n",4*n);
}