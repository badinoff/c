#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char password[25];
    int hasDigit, hasUpper, hasLower, hasSpecial;

    hasDigit = hasUpper = hasLower = hasSpecial = 0;

    printf("Create your password: ");
    scanf(" %s", password);

    for(int i = 0; i < strlen(password); i++){

        if(isupper(password[i])){

            hasUpper = 1;
            continue;
        }

        if(islower(password[i])){

            hasLower = 1;
            continue;
        }

        if(isdigit(password[i])){

            hasDigit = 1;
        }

        else{

            hasSpecial = 1;
        }

    }

    if((hasDigit) && (hasLower) && (hasUpper) && (hasSpecial) && (strlen(password) > 5 )){

        printf("Your password meets weak requirements!\n");
    }

    else{

        printf("You must include 1 upper case letter, 1 lower case letter, a special character, and a number! Bye!\n");
    }

    return 0;

}