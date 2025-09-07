#include <stdio.h>

int main(){

    int quantity; 
    float input, average;
    float total = 0.0;

    printf("How many numbers do you need to average?\n");
    
    do
    {
        if(scanf("%d", &quantity) != 1)
        {
            printf("Integer only, please!\n");
            printf("Try again: ");
            while(getchar() != '\n');
            quantity = -1;
        }

        else if(quantity < 1)
        {
            printf("Positive integer only, please!\n");
            printf("Try again: ");
        }
    }while(quantity < 1);
    
    

    for(int i = 1; i <= quantity; i++)
    {
        printf("Enter number %d: ", i);
                
            while(scanf("%f", &input) != 1)
                {
                    printf("How do you expect to average letters? That would be algebra...\n");
                    printf("Try again. Floats only this time! Enter number %d: ", i);
                    while(getchar() != '\n');
                }

            total += input;
    }

    average = (total / quantity);

    printf("The average is %.2f. Thanks for playing!\n", average);

    return 0;
}