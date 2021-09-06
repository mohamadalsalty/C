#include <stdio.h>


int main()
{
    int y, w;
    scanf("%i", &y);
    scanf("%i", &w);
    int first_winner, chances = 0;
    char prob[10][10] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    if (y > w)
    {
        first_winner = y;
    }
    else
    {
        first_winner = w;
    }


    printf("%s", prob[6 - first_winner]);

}
