#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; ++i)
    {
        if (i == 3)
        {
           break;
        }
        printf("%d\n",i);
    }
    return 0;
}
