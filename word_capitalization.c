#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[1000];
    scanf("%s", word);

    if (word[0] >= 'a' && word[0] <= 'z')
    {
        word[0] = toupper(word[0]);
    }

    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c", word[i]);
    }
}