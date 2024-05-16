#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int Strong_Password (const char* password)
{
    int kisbetu = 0;
    int nagybetu = 0;
    int szamjegyek = 0;
    int specialis = 0;
    int hossz = strlen(password);
    for (int i = 0; i < hossz; ++i) {
        if (islower(password[i])) {
            kisbetu = 1;
        }
        if (isupper(password[i])) {
            nagybetu = 1;
        }
        if (isdigit(password[i])) {
            szamjegyek++;
        }
        if (password[i] == '.' || password[i] == ',' || password[i] == ':' || password[i] == ';') {
            specialis = 1;
        }
    }

    szamjegyek = (szamjegyek >= 2) ? 1 : 0;
    return kisbetu && nagybetu && szamjegyek && specialis;
}

int Count_Strong_Passwords (const char* fname)
{
    FILE* fp = fopen (fname, "r");
    int counter = 0;

    char line[100];
    while (fgets(line, 100, fp) != NULL)
    {
        if (Strong_Password (line))
        {
            counter++;
        }
    }

    fclose(fp);

    return counter;
}


int main(int argc, char const *argv[])
{
    int darab = Count_Strong_Passwords ("passwords.txt");
    printf("A passwords.txt %d db erős jelszót tartalmaz.\n", darab);    

    
    return 0;
}
