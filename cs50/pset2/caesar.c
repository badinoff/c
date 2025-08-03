#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASCII_A 65
#define ASCII_a 97

char encrypt(char c, int k);

int main(int argc, string argv[])
{
    if (argc != 2) // verify there are only two arguments passed
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i])) // verify that user supplies an integer for key
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("Plain Text: ");
    printf("ciphertext: ");

    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        printf("%c", encrypt(plaintext[i], k));
    }

    printf("\n");
    return 0;
}

char encrypt(char c, int k)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            return ((c - ASCII_A + k) % 26) + 65;
        }
        else
        {
            return ((c - ASCII_a + k) % 26) + 97;
        }
    }

    return c;
}
