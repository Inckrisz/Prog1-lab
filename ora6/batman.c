#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        puts("Hello World\n");
    }
    // argv[1] == "Batman"
    else if ((strcmp(argv[1], "Batman") == 0 )|| (strcmp(argv[2], "Robin") == 0))
    {
        printf("Denevérveszély!\n");
        exit(1);
    }
    else 
    {
        printf("Hello %s!\n", argv[1]);
    }

    return 0;
}
