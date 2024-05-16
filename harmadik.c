#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct 
{
    int max;   
    int min;

} Matrix;

int Rand_Int (int also, int felso)
{
    return also + ( rand() % (felso - also + 1) ) ;

}

Matrix Matrix_Min_Max (const int n, int matrix[n][n])
{
    Matrix ertekek;
    int min = matrix[0][0];
    int max = matrix[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    ertekek.min = min;
    ertekek.max = max;

    return ertekek;
}

void kiir_matrix (const int n, int matrix[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        putchar('\n');
    }
}

int main(int argc, char const *argv[])
{
    srand(1980);
    int matrix[5][5];
    int meret = 5;

    for (int i = 0; i < meret; ++i)
    {
        for (int j = 0; j < meret; ++j)
        {
            int szam = Rand_Int (10, 99);
            matrix[i][j] = szam;
        }
    }

    Matrix ertekek = Matrix_Min_Max (meret, matrix);

    kiir_matrix(meret, matrix);

    printf("Legkisebb elem: %d\n", ertekek.min);
    printf("Legnagyobb elem: %d\n", ertekek.max);




    return 0;
}
