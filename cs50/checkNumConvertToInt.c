#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;    
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;        
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(argv[1][i]))
        {
            if isupper(argv[1][i])
            {
                
            }
        }
    }
}
