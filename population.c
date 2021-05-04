#include <stdio.h>
#include <cs50.h>

int startSize;
int endSize;
int years = 0;

int main(void)
{
    // TODO: Prompt for start size
    while (startSize < 9)
    {
        startSize = get_int("Start size: ");
    }
    // TODO: Prompt for end size
    while (endSize < startSize)
    {
        endSize = get_int("End size: ");
    }
    // TODO: Calculate number of years until we reach threshold
    while (endSize > startSize)
    {
        startSize = startSize + (startSize / 3) - (startSize / 4);
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d", years);

}
