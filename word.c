#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];

    scanf("%100s", word);
    int string_len = strlen(word);
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < string_len; i++)
    {
        // Count the upper and lower cases
        // printf("%i\n", word[i]);
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uppercase++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            lowercase++;
        }
    }
    // printf("uppercase: %i lowercase: %i ", uppercase, lowercase);
    if (lowercase >= uppercase)
    {
        for (int i = 0; i < string_len; i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                printf("%c", word[i] + 32);
            }
            else
            {
                printf("%c", word[i]);
            }
        }
    }
    else if (uppercase > lowercase)
    {
        for (int i = 0; i < string_len; i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                printf("%c", word[i] - 32);
            }
            else
            {
                printf("%c", word[i]);
            }
        }
    }

}