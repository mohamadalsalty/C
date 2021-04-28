#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    //non-negative protection do
    do
    {
        // ask the user "Change owed:"
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // set the cents and coins ints
    int cents = round(dollars * 100);
    int coins = 0;

    // to set the types
    int types[] = {25, 10, 5, 1};
    int size = sizeof(types) / sizeof(int);

    //this loop is to get the number of tries we need
    for (int i = 0; i < size; i++)
    {
        coins += cents / types[i];
        cents %= types[i];
    }
    
    
    // to print the final results
    printf("%i", coins);

}