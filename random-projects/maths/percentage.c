#include <stdio.h>

int main()
{
    float num1, num2, result;
    
    printf("Provide the number for which percentage is calculated:");
    scanf(" %f", &num1);

    printf("Provide the number representing 100 percent:");
    scanf(" %f", &num2);

    result = num1 / num2;
    result = result * 100;

    printf("\n %.2f is %.2f%% of %.2f\n", num1, result, num2);

    return 0;
    
}