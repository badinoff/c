#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

string get_player_word(int player_num);
int scoring(string word);

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{    
    string word1 = get_player_word(1), word2 = get_player_word(2);
    int score1 = scoring(word1);
    int score2 = scoring(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

string get_player_word(int player_num)
{

   return  get_string("Player %d: ", player_num);

}

int scoring(string word)
{
    int score = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        char c = toupper(word[i]);
        if (c >= 'A' && c <= 'Z')
        {
            score += points[c - 'A'];
        }
    }

    return score;
}