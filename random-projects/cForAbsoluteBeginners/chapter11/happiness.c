#include <stdio.h>

int main(){

    int h_score;

    printf("Rate your happeniss from 1 to 10.\n");

    if(scanf(" %d", &h_score) != 1 || h_score > 10 || h_score < 1)
        {
            printf("This scale only accepts numbers from 1 to 10. Bye!\n");

            return 0;
        }

    if(h_score >= 8)
        {
            printf("Well aren't you fortunate...\n");
        }

    else if(h_score >= 5)
        {
            printf("Not doing so bad.\n");
        }

    else if(h_score >= 3)
        {
            printf("Could be better, eh?\n");
        }

    else if(h_score >= 1)
        {
            printf("That sucks...\n");
        }

    return 0;
    
}