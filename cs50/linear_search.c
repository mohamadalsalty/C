#include <stdio.h>
#include <cs50.h>

int main()
{
    int rooms[] = {1,2,3,4,5,6,7,8,9};
    for (int x = 0; x < 9; x++)
    {
        // big o is o(n) = o(9)
        if (rooms[x] == 9)
        {
            printf("%d looped %i", rooms[x], x+1);
        }
    }
    
}





