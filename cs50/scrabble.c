#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string LETTERS = "abcdefghijklmnopqrstuvwxyz";
int compute_score(string word);
int socer = 0;
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    socer = 0;
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!");
    }
    else if (score1 == score2)
    {
        printf("Tie!");
    }




}

int compute_score(string word)
{
    // TODO: Compute and return score for string



    int letterscounter = strlen(word);
    int alphacounter = strlen(LETTERS);



    // Get the word letters and search in the array
    char lettertotest;
    for (int x = 0; x < letterscounter; x++)
    {
        if (word[x] > 64 && word[x] < 91)
        {
            lettertotest = word[x] + 32;
        }
        else
        {
            lettertotest = word[x];
        }

        // search in the array to add point
        int cX = 0;
        while (cX <= alphacounter)
        {

            if (LETTERS[cX] == lettertotest)
            {
                socer += POINTS[cX];
            }
            cX++;

        }

    }




    return socer;
}