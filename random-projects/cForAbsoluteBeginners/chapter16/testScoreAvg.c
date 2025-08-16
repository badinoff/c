#include <stdio.h>

int main()
{

    float score, avg, total = 0.0;
    int count = 0, choice;

    while(count < 5)
    {
        printf("Enter a test score %d: ", count + 1);

        while(scanf(" %f", &score) != 1)
        {
            printf("Invalid score. Try again: ");
            while(getchar() != '\n');
        }

        if(score == -1)
        {
            printf("Do you want to enter more scores (1) or finish (2)? ");
            scanf(" %d", &choice);

            if(choice == 2)
            {
                break;
            }
            else
            {
                continue;
            }
            
            break;
        }

        else if(score < 0 || score > 100)
        {
            printf("Invalid score. Enter score between 0 and 100: ");
        }

        else
        {
            total += score;
            count++;
        }
    }

    avg = total / count;
    printf("The average of %d submitted scores is %.2f%%\n", count, avg);

    return 0;
}