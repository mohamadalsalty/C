#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int x = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char answer[14];
        char plus[2] = "+";
        char minus[2] = "-";
        
        scanf("%s", &answer[0]);
        // printf("%c", answer[1]);

        if (answer[1] == plus[0])
        {
            x++;
        }
        else if (answer[1] == minus[0])
        {
            x--;
        }

    }


    printf("%i", x);

}