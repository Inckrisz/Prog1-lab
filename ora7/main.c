#include <stdio.h>

#define SIZE 100

void get_values (int *p1, int* p2)
{
    *p1 = 2;
    *p2 = 10;
}

typedef struct {
    int x;
    int y;
} Pont;

typedef struct {
    int x;
    int y;
} Kor;

void kiir (Pont p)
{
    printf("%d %d", p.x, p.y);
}

typedef struct {
    int a;
    int b;
} Teglalap;

int Teglalap_kerulet (Teglalap t)
{
    return 2*(t.a + t.b);
}

void Teglalap_muvelet (Teglalap t, int* a, int* b)
{
    *a = 2*(t.a + t.b);
    *b = t.a * t.b;
}

void Kor_muvelet (Kor k, int* a, int* b)
{

}

int main(int argc, char const *argv[])
{
    Pont p1 = {5, 10} ;
    // p1.x = 5;
    // p1.y = 10;
    // kiir(p1);
    int* a;
    int* b;
    Teglalap t = {5, 10};
    Teglalap_muvelet (t, &a, &b);

    printf("a: %d, b: %d", a, b);
    // printf("%d", Teglalap_kerulet(t));
    // int *p1;
    // int *p2;
    // get_values (&p1, &p2);
    // printf("%d, %d", p1, p2);
    

    return 0;
}
