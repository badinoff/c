#include <stdio.h>
#include <string.h>
#include "inputval.h"
#include "version.h"
#include "scoring.h"

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    printf("Scrabble v%d.%d\n", VERSION_MAJOR, VERSION_MINOR);
    
    char word1[50], word2[50];
    
    if (get_player_word(word1, 1)) return 1;
    if (get_player_word(word2, 2)) return 1;

    //Score each word using compute_score
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //Print the words and their scores
    printf("Player 1 scores %d points\n", score1);
    printf("Player 2 scores %d points\n", score2);

    //Compare scores and print winner
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1) {
        printf("Player 2 wins!\n");
    }
    else {
        printf("Tie!\n");
    }

    return 0;
}

