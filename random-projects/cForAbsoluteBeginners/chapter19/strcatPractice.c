#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char first[25], last[25], c;
    int i = 0;

    printf("What's your first name? ");

    while((c = getchar()) != '\n' && c != ' ' && i < 24){

        first[i] = c;
        i++;

    }
    first[i] = '\0';
    
    printf("What's your last name? ");
    i = 0;

    while((c = getchar()) != '\n' && c != ' ' && i < 24){

        last[i] = c;
        i++;
    }
    last[i] = '\0';
    
    first[0] = toupper(first[0]);
    last[0] = toupper(last[0]);

    strcat(first, " ");
    strcat(first, last);

    printf("Your full name is %s\n", first);

    return 0;
}