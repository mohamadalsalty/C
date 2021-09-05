#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[101];
    scanf("%s", word);
    int n = strlen(word);
    int l;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (word[i] > word[j])
            {
                l = word[i];
                word[i] = word[j];
                word[j] = l;
            }
        }
    }


    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (word[i] != word[i + 1])
        {
            count++;
        }
    }


    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}