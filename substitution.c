#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool check_alpha(char key);
int main(int argc, string argv[])
{
    // TODO get the key and vaildate it

    if ((argv[2]) || !(argv[1]))
    {
        printf("Usage: ./substitution key");
        return 1;
    }


    // check lenght of the string
    if ((argv[1][26]) || (argv[1][25] == 0))
    {
        printf("Key must contain 26 characters.");
        return 1;
    }

    int len_of_the_argv = strlen(argv[1]);

    // check alphabetical characters
    for (int x = 0; x < len_of_the_argv; x++)
    {
        if (!check_alpha(argv[1][x]))
        {
            printf("please use alphabetical characters only");
            return 1;
        }
    }

    // check if uppercase or not
    for (int x = 0; x < len_of_the_argv; x++)
    {
        if (islower(argv[1][x]))
        {
            argv[1][x] = toupper(argv[1][x]);
        }
    }

    // chek if it's repeated or not
    for (int x = 0; x < len_of_the_argv; x++)
    {

        if (islower(argv[1][x]))
        {
            argv[1][x] = toupper(argv[1][x]);
        }

        for (int xx = 0; xx < len_of_the_argv; xx++)
        {
            if (islower(argv[1][xx]))
            {
                argv[1][xx] = toupper(argv[1][xx]);
            }

            if (argv[1][xx] == argv[1][x] && x != xx)
            {
                printf("Please don't repeate letters");
                return 1;
            }
        }
    }


    // TODO get plaintext, encipher and ciphertext
    string plaintext = get_string("plaintext: ");
    string difference = argv[1];
    printf("ciphertext: ");
    for (int x = 0; x < strlen(plaintext); x++)
    {
        // check if it's an alpha char
        if (isalpha(plaintext[x]))
        {
            // if it's a small letter
            if (islower(plaintext[x]))
            {
                int text = plaintext[x] - 97;
                printf("%c", tolower(argv[1][text]));
            }
            // check if it's capital letter
            else if (isupper(plaintext[x]))
            {
                int text = plaintext[x] - 65;
                printf("%c", argv[1][text]);
            }
        }
        // if it's not an alpha letter
        else
        {
            printf("%c", plaintext[x]);
        }
        
    }
    printf("\n");

}

// the check alpha function
bool check_alpha(char key)
{
    if (isalpha(key))
    {
        return true;
    }
    else
    {
        return 0;
    }
}

