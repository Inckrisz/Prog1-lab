#include <stdio.h>

typedef char* string;

void kiir (int sorok, int oszlopok, string matrix[sorok][oszlopok])
{
    for (int sor = 0; sor < sorok; ++sor)
    {
        for (int oszlop = 0; oszlop < oszlopok; ++oszlop)
        {
            printf("%s\t",matrix[sor][oszlop]);
        }
        printf("\n");
    }
}

int osszead(int sorok, int oszlopok, int matrix[sorok][oszlopok])
{
    int osszeadas = 0;
    for (int sor = 0; sor < sorok; ++sor)
    {
        for (int oszlop = 0; oszlop < oszlopok; ++oszlop)
        {
            osszeadas += matrix[sor][oszlop];
        }
        
    }
    return osszeadas;
}

void kiir_foatlo(int sorok, int oszlopok, string matrix[sorok][oszlopok])
{
    for (int i = 0; i < sorok; ++i)
    {
        printf("%s ", matrix[i][i]);
    }
}


// 1 2 3 4   
int main(int argc, char const *argv[])
{
    // int matrix[6][6] = {
    //     {1,2,3,4,5,6},
    //     {1,2,3,4,5,6},
    //     {1,2,3,4,5,6},
    //     {1,2,3,4,5,6},
    //     {1,2,3,4,5,6},
    //     {1,2,3,4,5,6}
    // };

    string matrix[3][3] = {
        {"aa", "bb", "cc"},
        {"aa", "bb", "cc"},
        {"aa", "bb", "cc"}
    };

    int sorok = 3; int oszlopok = 3;
    kiir(sorok, oszlopok, matrix);
    kiir_foatlo(sorok, oszlopok, matrix);

    // printf("összeg: %d\n", osszeg);

    return 0;
}
