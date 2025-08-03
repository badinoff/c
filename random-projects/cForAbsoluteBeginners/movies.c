#include <stdio.h>
#include <string.h>

int main()
{
    int numMovies, counter, rating, favRating, lowRating; 
    char movieName[40], favMovie[40], leastMovie[40], moviePrompt[6]; 

    favRating = 0;
    lowRating = 11;

    printf("How many movies did you see this year? ");

    do{
        if(scanf(" %d", &numMovies) != 1) //check if input is an integer; %d expects an integer; !=1 disqualifies anything except a single integer 
            {
                printf("Please enter a positive non-zero integer: ");
                while(getchar() != '\n'); //clear buffer - standard C idiom
                numMovies = -1; //set to -1 to keep looping
            }
        else if(numMovies < 1) //disqualifies zero and negative integers
            {
                printf("Please enter a positive non-zero integer: ");
                
            }
    }while(numMovies < 1);

    for(counter = 1; counter <= numMovies; counter++)
    {
        strcpy(moviePrompt, (counter == 1) ? "first" : "next"); //uses "first" in the prompt for the first movie name and "next" in all subsequent promps
        
        printf("what is the name of the %s movie? ", moviePrompt); //capitalizes on the previous line
        scanf(" %[^\n]", movieName); // %[^\n] allows scanf to accept input with spaces
        printf("On a scale of 1 to 10 how would you rate it? ");
        
        do{
            if(scanf(" %d", &rating) != 1)
                {
                    printf("Please enter an integer from 1 to 10! ");
                    while(getchar() != '\n');
                    rating = -1;
                }

            else if(rating < 1 || rating > 10)
                {
                    printf("Please enter an integer from 1 to 10! ");
                }
        }while(rating < 1 || rating > 10); //sets upper and lower limits for acceptable user ratings

        if(rating > favRating)
        {
            strcpy(favMovie, movieName);
            favRating = rating;
        }

        if(rating < lowRating)
        {
            strcpy(leastMovie, movieName);
            lowRating = rating;
        }
    }

        printf("\nYour favorite movie was %s.\n", favMovie);
        printf("\nYour least favorite movie was %s.\n", leastMovie);
        //printf("Your movie name is %s\n", movieName);

    return 0;

}