#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get the number of words from the user
    int n;
    scanf("%d", &n);
    if (n <= 100 && n >= 1)
    {
        char words[200][101];

        // Show inputs for the user
        for (int i = 0; i < n; i++)
        {
            scanf("%s", words[i]);
        }

        // Show the results
        for (int i = 0; i < n; i++)
        {
            int len = strlen(&words[i][0]);
            // Check if the lengh is more than 10 chars
            if (len > 10)
            {
                // Print the first letter
                printf("%c", words[i][0]);
                // Print the number of letters
                printf("%i", len - 2);
                // Print the last letter
                printf("%c", words[i][len -  1]);
                printf("\n");
            }
            else
            {
                printf("%s", words[i]);
                printf("\n");
            }
        }


    }
}