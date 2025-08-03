#include <stdio.h>
#include <string.h>

int main()
{

    
    
    int n = 0;

    //Allow user input; will not run the incrementing part of while loop if input >= 5

    /*
    printf("Please enter any integer. Note that INCREMENTING won't work if you enter anything more than 5: ");
    scanf("%d", &n);
    */
    
    //Version 1 - while loop
/*
    while(n < 5)
    {
        printf("%d\n", ++n);
    }

    printf("...and back:\n");
    printf("%d\n", n);

    while(n > 1)
    {
        printf("%d\n", --n);
    }
*/
    //Version 2 - for loop
    
    for (; n < 5; n++)
    {
        printf("%d\n", n + 1);
    }

    printf("...and back:\n");
    printf("%d\n", n);

    for(; n > 1; n--)
    {
        printf("%d\n", n - 1);
    }

    printf("\nn takes %zu bytes in memory\n", sizeof(n));

    return 0;

}