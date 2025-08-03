#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char price_as_string[25];
    float price_per_tire;
    int quantity;
    float total_before_tax;
    float total;
    float tax;

    printf("How many tires do you need?\n");
    scanf(" %d", &quantity);

    printf("What is the price per tire?\n");
    printf("Include $ sign!!\n");
    scanf(" %s", price_as_string);

    if(price_as_string[0] != '$')
    {
        printf("You forgot the $ sign! Start over...\n");

        return 1;
    }

    else 
    {
        price_per_tire = strtof(&price_as_string[1], NULL);
    }

    printf("What is the sales tax in your state?\n");
    scanf(" %f", &tax);

    total_before_tax = quantity * price_per_tire;
    total = total_before_tax * tax + total_before_tax;

    printf("The total for the tires you need is %.2f\n", total);

    return 0;
}