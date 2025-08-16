#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if((i % 2) == 1)
            {
                printf("Odd\n");
                //continue;
            }
        printf("Even\n");
    }

    return 0;
}