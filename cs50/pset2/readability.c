#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    float formula = 0.0588 * ((float)count_letters(text) / count_words(text) * 100) -
                     0.296 * ((float)count_sentences(text) / count_words(text) * 100) - 15.8;
    
    int grade_level = (int) round(formula); 

    if (grade_level < 1)
        printf("Before Grade 1\n");
        else if (grade_level >= 16)
            printf("Grade 16+\n");
        else
            printf ("Grade %i\n", (int) grade_level);
}
/*
    //string scan tests below; comment out the if statement above

    printf ("%i\n", count_letters(text));
    printf ("%i\n", count_words(text));
    printf("%i\n", count_sentences(text));   
    printf("%f\n", formula); 
*/    
int count_letters(string text)  // Count alpha chars and incr 'letters' for each
{                                                                       
    int letters = 0; 

    for (int i = 0; text[i] != '\0'; i++)
    {        
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    return letters;
}

int count_words(string text)    // Count spaces with isspace, then +1
{

    int words = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }

    return words + 1;

}

int count_sentences(string text)    // Count punctuation occurrances and incr 'sentences'
{                                       

    int sentences = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
        sentences++;
        }
    }

    return sentences;
}