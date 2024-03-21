#include <stdio.h>
#include "prog1.h"
#include <string.h>

#define SIZE 100

int get_int(string prompt)
{
    printf("%s\n", prompt);
    int n;
    scanf("%d", &n);
    return n;
}

void feltolt (char tomb[])
{
    for (int i = 0; i < SIZE; ++i)
    {
        tomb[i] = 'a' ;
    }
}

// int my_strlen(string s)
// {
//     int i = 0;
//     // for (i = 0; s[i] != '/0'; ++i)
//     // {
        
//     // }

//     while (s[i] != '/0') 
//     {
//         ++i;
//     }
//     return i;
// }

int is_palindrome (string s)
{
    //return 1 palindróm, 0 hogyha nem
    int i = 0; int j = strlen(s)-1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        ++i;
        j--;
    }
    return 1;
}

int find_char(string s, char c)
{
    // return index pozíció, -1 ha nincs benne
    int j = strlen(s) - 1;
    for (int i = 0; i < j; ++j)
    {
        if (s[i] == c) 
        {
            return i;
        }
    }
    return -1;
  
}

int contains_character(string s, char c)
{
    // benne van akkor 1, ha nem akkor 0
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j)
    {
        if (s[i] == c)
        {
            return 1;
        }
        ++i;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    string a = "ann";
    char c = 'a';
    printf("palindróm-e %s : %s\n", a, is_palindrome(a) ? "igen" : "nem" );
    // printf("%d", contains_character(a, 'c'));
    printf("%s-hol van a '%c' karakter? %d", a, c, find_char(a, c) );

    // char tomb[SIZE]; //'a' 
    // feltolt(tomb);

    // for (int i = 0; i < SIZE; ++i)
    // {
    //     printf("%c, ", tomb[i]);
    // }
    // string s = get_string("Neved: ");
    
    // int n = get_int("Adj meg számot: ");
    // //Szám: 5

    // printf("\nHello %s", s);
    // printf("\nn=%d", n);

    return 0;
}
