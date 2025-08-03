#include <stdio.h>

int main()
{
    int a, b, result;
    char response;

    printf("This program multiplies 2 integers for as long as you want\n");

    do
    {
        printf("Please type your first integer:");
    
        scanf(" %d", &a);

        printf("Please type your second integer:");

        scanf(" %d", &b);

        result = a * b;

        printf("The product of %d and %d is %d\n", a, b, result);
        printf("Would you like to perform another multiplication? Enter Y or N: ");

        scanf(" %c", &response);

    }

    while (response != 'N' && response != 'n');

    return 0;

}