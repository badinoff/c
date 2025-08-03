#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "inputval.h"


int get_player_word(char* word, int player_num) {
    int first_try = 1;
    do {
        if (first_try) printf("Enter your word, Player %d: ", player_num);
        
        if (!fgets(word, 50, stdin)) 
            return 1;  // EOF
        
        word[strcspn(word, "\n")] = 0;  // Remove newline
        
        first_try = 0;

    } while (inputval(word));
    
    return 0;
}

int validate(char* input)
{
    if (strlen(input) == 0) {  // Empty
        printf("Invalid input. Try again: ");
        return 1;  // Invalid
    }

    return 0;  // Valid
}

int inputval(char* word)  
{
    return validate(word);  
}