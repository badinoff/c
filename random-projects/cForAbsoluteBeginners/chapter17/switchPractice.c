#include <stdio.h>
#include <stdlib.h>

void show_sport(int year);

int main(){

    int mainChoice;

    do{

        printf("Select championship year:\n");
        printf("1. 2024\n");
        printf("2. 2020\n");
        printf("3. 2016\n");
        printf("4. Quit\n\n");
        printf("Your choice: ");

        while(scanf(" %d", &mainChoice) != 1){

            printf("Invalid Input. Try again\n");
            while(getchar() != '\n');
            printf("Your choice: ");
        }
        
            switch(mainChoice)
                {
                    case 1:{
                        show_sport(2024); break;
                    }
                
                    case 2:{
                        show_sport(2020); break;
                    }
                
                    case 3:{
                        show_sport(2016); break;
                    }
                
                    case 4:{
                        printf("Goodbye!\n"); break;
                    }
                
                    default:{
                        printf("Invalid Input. Try again: 1-4: "); break;
                    }
                }

        }while(mainChoice < 1 || mainChoice > 4);

        return 0;
}

void show_sport(int year){

    int sport;

    do{
    
        printf("\n\nWhat sport are you interested in?\n");
        printf("1. Hockey\n");
        printf("2. Football\n");
        printf("3. Formula 1\n");
        printf("4. Quit\n\n");
        printf("Your choice: ");
        
        while(scanf(" %d", &sport) != 1){
            printf("Invalid Input. Try again\n\n");
            while(getchar() != '\n');
            printf("Your choice: ");
        }

        switch(sport){
            
            case 1:
            
                switch(year){
                    case 2024: printf("In 2024 Hockey champion of the world was Russia\n"); break;
                    case 2020: printf("In 2020 hockey champion of the world was USA\n"); break;
                    case 2016: printf("In 2016 Hockey champion of the world was Canada\n"); break;

                    }

                break;

            case 2:
                
                switch(year){
                    case 2024: printf("In 2024 Football champion of the world was Argentina.\n"); break;
                    case 2020: printf("In 2020 Football champion of the world was Germany.\n"); break;
                    case 2016: printf("In 2016 Football champion of the world was Brazil.\n"); break;

                }
                
            break;

            case 3:
                
                switch(year){
                    case 2024: printf("In 2024 Formula 1 constructor champion was Mercedes\n"); break;
                    case 2020: printf("In 2020 Formula 1 constructor champion was Red Bull\n"); break;
                    case 2016: printf("In 2016 Formula 1 constructor champion was McLaren\n"); break;
                }

            break;

            case 4:
                
                    printf("Goodbye!\n"); break;
            
            default:
                printf("Invalid Input. Try again 1-4: \n"); break;
        }

    }while(sport < 1 || sport > 4);
}