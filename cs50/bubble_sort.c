#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int rooms[] = {1, 5, 2, 10, 0, 9, 200, 1, 3};
    // this tmp var is to set the old value of a loop variable
    int tmp = 0;

    // this for loop is to do the matching and the calculate
    for (int x = 0; x < 9; x++)
    {
        for (int i = 0; i < 9; i++)
        {
            // this if statment is to see if the number is greater then the next one and replace it
            if (rooms[i - 1] > rooms[i])
            {
                tmp = rooms[i - 1];
                rooms[i - 1] = rooms[i];
                rooms[i] = tmp;
            }
        }
    }

    // this for loop is to list the loop content
    for (int x = 0; x < 9; x++)
    {
        printf("%d - ", rooms[x]);
    }

}