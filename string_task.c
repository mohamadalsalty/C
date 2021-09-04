#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // Get the word
    char vowels[6] = {'A', 'O', 'Y', 'E', 'U', 'I'};
    char word[101];
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++)
    {
        char letter[1];
        int is_ok = 1;
        // Check if the word has blocked letters
        if ((word[i] >= 'a' && word[i] <= 'z'))
        {
            letter[0] = toupper(word[i]); 
        }
        else
        {
            letter[0] = word[i]; 
        }
        for (int x = 0; x < 6; x++)
        {
            if (letter[0] == vowels[x])
            {
                is_ok = 0;
                //break;
            }
        }
        
        if (is_ok == 1)
        {
            // Check if there's a point before the char or not
            if (strcmp(&word[i - 1], ".") != 0)
            {
                printf(".");
            }
            // Check if the char is uppercase, if so convert it to lower and print if
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                printf("%c", tolower(word[i]));
            }
            else
            {
                printf("%c", word[i]);   
            }
        }
        
    }
    
}