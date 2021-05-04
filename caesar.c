#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    // TODO check if the argv is one 
    if (argc != 2 || !isdigit(*argv[1]))
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    // TODO don't accept any non-numeric values
    int key = atoi(argv[1]);
    if (key == 0)
    {
        return 1;
    }
    
    int len_of_the_arg = strlen(argv[1]);
    for (int x = 0; x < len_of_the_arg; x++)
    {
        if (!isdigit(argv[1][x]))
        {
            return printf("Usage: ./caesar key");
        }
    }
    
    // TODO Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    // TODO letters checker
    for (int x = 0; x < strlen(plaintext); x++)
    {
        if (isalpha(plaintext[x]))
        {
            // if the char is a capital letter
            if (isupper(plaintext[x]))
            {
                char m = 'A';
                printf("%c", (plaintext[x] - m + key) % 26 + m);
            }
            
            // if the char is a small letter
            else if (islower((plaintext[x])))
            {
                char m = 'a';
                printf("%c", (plaintext[x] - m + key) % 26 + m);                
            }
            
        }
        // if it's not a letter
        else
        {
            printf("%c", plaintext[x]);
        }

    }
    
    // print the stupid new line
    printf("\n");

}