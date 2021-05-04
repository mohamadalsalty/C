#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // set the variables we need
    int rooms[] = {5, 1, 15, 0};
    int tmp = 0;
    int value = 0;

    // this for loop is to get all the number in the array one per one
    for (int i = 0; i < 3; i++)
    {
        // this value variable is to set the current number of the loop counter
        value = i;

        // this for loop is to see if the current i is the smallest or not
        for (int ii = i + 1; ii < 4; ii++)
        {

            // this if statment is to see if i is bigger then the next one or not
            if (rooms[value] > rooms[ii])
            {
                // this variable is to set the current counter of the smallest number
                value = ii;
            }
        }

        // this variables to replace the biggest with the smallest and the smallest with the biggest
        tmp = rooms[i];
        rooms[i] = rooms[value];
        rooms[value] = tmp;

    }


    // this for loop is to show all the items in the array
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", rooms[i]);
    }

}