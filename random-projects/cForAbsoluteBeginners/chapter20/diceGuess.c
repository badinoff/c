#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int main(void){

    int dice1, dice2, total1, total2;
    char ans;

    srand(time(NULL) ^ getpid());

    dice1 = ((rand() % 6) + 1);
    dice2 = ((rand() % 6) + 1);
    total1 = dice1 + dice2;

    printf("First roll: %d and %d, total %d\n", dice1, dice2, total1);

    do{
        printf("Try to guess if the next total will be (H)igher, (L)ower or (S)ame: ");
        scanf(" %c", &ans);
        ans = toupper(ans);
    }while((ans != 'L') && (ans != 'H') && (ans != 'S'));

    dice1 = ((rand() % 6) + 1);
    dice2 = ((rand() % 6) + 1);
    total2 = dice1 + dice2;

    printf("Second roll: %d and %d, total %d\n", dice1, dice2, total2);

    if(ans == 'L'){
        if(total2 < total1){
            printf("Your guess was right! %d is lower than %d\n", total2, total1);

        }else{
            printf("You guessed wrong. %d is higher than %d. Better luck next time!\n", total2, total1);
        }
    }
    
    if(ans == 'H'){
        if(total1 < total2){
            printf("Your guess was right! %d is lower than %d\n", total1, total2);
        }else{
            printf("You guessed wrong. %d is higher than %d\n", total1, total2);
        }
    }

    if(ans == 'S'){
        if(total1 == total2){
            printf("Your guess was right! %d equals %d\n", total1, total2);
        }else{
            printf("You guessed wrong. %d does not equal %d\n", total1, total2);
        }
    }

    return 0;
}