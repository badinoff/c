#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc !=2) //check that the number of arguments is exactly 2
        {
            printf("usage: ./substitution key\n");

            return 1;
        }

    if (strlen(argv[1]) != 26) //check that cipher key is exactly 26 characters long
        {
            printf("key must contain 26 characters\n");

            return 1;
        }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Cipher key must only have alpha characters\n");

            return 1;
        }
    }
}