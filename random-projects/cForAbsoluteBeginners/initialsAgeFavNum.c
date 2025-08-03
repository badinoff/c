#include <stdio.h>

int main(void)
{

char firstinitial[5];
char lastinitial[5];
int age;
int favnumber;

printf("What is your first Initial?\n");
scanf(" %s", firstinitial);

printf("What is your last initial?\n");
scanf(" %s", lastinitial);

printf("What is your age?\n");
scanf(" %d", &age);

printf("What is your favorite number?\n");
scanf(" %d", &favnumber);

printf("Your initials are %s.%s. and your age is %d. Your favorite number is %d. Goodbye!\n", firstinitial, lastinitial, age, favnumber);

return 0;

}