#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char name[11];
    int i;

    for(i = 0; i < 10; i++){
        name[i] = getchar();

        if(name[i] == '\n'){
            i--;
            name[i+1] = '\0';
            break;
        }
    }

    for(i = 0; i < strlen(name); i++){
        putchar(name[i]);
    }

    if(!isupper(name[0])){

        printf(" is not capitalized!\n");
    }

    else{

        printf(" is capitalized correctly!\n");
    }

    return 0;

}