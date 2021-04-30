#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // what we need to calcal
    int words = 1;
    int letters = 0;
    int sentences = 0;
    // TODO ask the user about the string
    string text = get_string("Text: ");
    // count the letters
    int letters_counter = strlen(text);
    // printf("%i", letters_counter);
    for (int x = 0; x < letters_counter; x++)
    {
        // to count the words
        if (text[x] == 32)
        {
            words = words + 1;
        }

        // to count the letters
        if ((text[x] >= 'a' && text[x] <= 'z') || (text[x] >= 'A' && text[x] <= 'Z'))
        {
            letters = letters + 1;
        }

        // to uncount the spaces
        if ((text[x - 1] == text[x] && text[x] == 32))
        {
            words = words - 1;
        }

        // to count the sentences
        if (text[x] == '.' || text[x] == '!' || text[x] == '?')
        {
            sentences = sentences + 1;
        }

    }

    //to check if the space is in the final
    if (text[letters_counter - 1] == 32)
    {
        words = words - 1;
    }

    //to check if the word is empty
    if (text[0] == 32)
    {
        words = words - 1;
    }

    // TODO get the grade
    float grade = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;

    
    // TODO print the grade
    
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
    
    
    //printf ("%i", final_grade);
    // printf("The nubmer of words is: %i\n", words);
    // printf("The number of letters is: %i\n", letters);
    // printf("The number of sentences is: %i\n", sentences);

}
