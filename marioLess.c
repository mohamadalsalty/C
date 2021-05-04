#include <stdio.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
    //this is to calculate the spent time
    clock_t begin = clock();
    //this is the int where we are going to get from the user
    int height;
    //this will ask the user while the condetion is not valid
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    //this for is to output the numbers line per line
    for (int i = 1; i <= height; i++)
    {
        int j = i;
        //this while is to get the points to be igual to height
        while (height > j)
        {
            printf(" ");
            j++;
        }
        //this for is to echo the hashtags
        for (int x = 1; x <= i; x++)
        {
            printf("#");
        }
        //this to print a new line after each row
        printf("\n");
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("spent: %f", time_spent);
}