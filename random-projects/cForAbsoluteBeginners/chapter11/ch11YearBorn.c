#include <stdio.h>

#define CURRENTYEAR 2025

int main()
{

    int age, year_born;

    printf("What year were you born in?\n");
    scanf(" %d", &year_born);

    do
    {

        if
        (
            year_born > CURRENTYEAR
        )
        
        { 
            printf("You couldn't have been born in the future.\n");
            printf("Try again...\n");
            scanf(" %d", &year_born);
        }
    
        age = CURRENTYEAR - year_born;
    
        printf("So you are %d years old\n", age);
        
    } while (CURRENTYEAR < year_born);

    if
    (
        (year_born % 4) == 0
    )

    {
        printf("You were born in a leap year. What a drag...\n");

    }

    return 0;

}