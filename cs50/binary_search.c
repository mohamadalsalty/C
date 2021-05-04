#include <stdio.h>
#include <cs50.h>

int main()
{
    int rooms[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 9;
    int m;
    int x = 0;
    int searching_for = 6;
    
    // while the room was not found we will run this loop
    while (rooms[x] != searching_for)
    {
        m = (start + (end - start) / 2);
        // if the room we are looking for was in the middle
        if (rooms[m] == searching_for)
        {
            printf("%dloopd: %d", rooms[m], x);
            return 1;
        }
        // if the room was bigger then the room we are looking for, go and set the end is middle
        else if (searching_for < rooms[m])
        {
            end = m;
        }
        // if the room was not bigger then the room we are looking for, go and set the start is the middle
        else if (searching_for > rooms[m])
        {
            start = m;
        }
        x++;
    }

}
