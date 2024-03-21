#include <stdio.h>

//visszatérési érték,   input(paraméter)
int duplaz(int input)
{
    return 2*input;
}

int get_int()
{
    int n;
    scanf("%d", &n);
    return n;
}

int get_positive_int()
{
    int n;
    do {
        printf("Írj be egy számot: ");
        
        scanf("%d", &n);
        
    } while (n <= 0);

    return n;
}




int main(int argc, char const *argv[])
{
    // printf("Írj be egy számot: ");
    // int input = get_int(); // 5
    int input2 = get_positive_int(); // -5 -3 -2 5
    printf("%d\n", duplaz(input2));
    return 0;
}
