#include <stdio.h>

#define LIMIT 45

void tomb_kiir (const int n, int tomb[])
{
    for (int i = 0; i < n ; ++i)
    {
        printf("%d, ", tomb[i]);
    }
}

void hatos_lotto ()
{
    for (int a = 1; a <= LIMIT; ++a)
    {
        for (int b = 1 + a; b <= LIMIT; ++b)
        {
            for (int c = 1 + b; c<= LIMIT; ++c)
            {
                for (int d = 1 + c; d<= LIMIT; ++d)
                {
                    for (int e = 1 + d; e <= LIMIT; ++e)
                    {
                        for (int f = 1 + e; f <= LIMIT; ++f)
                        {
                            if (((a + b + c + d + e + f) == 90) && ((a * b* c* d* e * f) == 996300))
                            {
                                int szamok[] = {a,b,c,d,e,f};
                                int n = 6;
                                tomb_kiir (n, szamok);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    hatos_lotto() ;
    

    return 0;
}
