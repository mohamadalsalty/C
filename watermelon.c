#include <stdio.h>


int main(void)
{
    // Get the w (killos)
    int w;
    scanf("%d", &w);
    // Check the killos number if it's an even number or not
    if (w % 2 == 0 && w != 2)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
}