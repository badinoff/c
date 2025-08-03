#include <stdio.h>
#include <stdlib.h>

int main(){

    char price_as_string[25];
    float price;
    char topping1[25];
    int number_of_slices;
    int date;
    int month;
    int year;

    printf("How much does the pizza cost?\n");
    printf("Enter as $XX.xx\n");

    scanf(" %s", price_as_string);

    if(price_as_string[0] != '$')
    {
        printf("Usage: $XX.xx\n");
        
        return 1;
    }
    
    else
    {
        price = strtof(&price_as_string[1], NULL);
    }

    printf("What is your favorite topping?\n");
    scanf(" %s", topping1);

    printf("How many slices of %s pizza do you want?\n", topping1);
    scanf("%d", &number_of_slices);

    printf("What's today's date? Use mm/dd/yyy format\n");
    scanf("%d/%d/%d", &month,&date,&year);

    printf("\nYou should have %d slices of %s pizza on %d/%d/%d", number_of_slices,topping1,date,month,year);
    //printf(" and have %d slices of %s pizza!\n", number_of_slices,topping1);
    printf("\nIt will cost you $%.2f\n", price);

    return 0;
}