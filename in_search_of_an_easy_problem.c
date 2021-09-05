#include <stdio.h>

int main()
{
    int n,is_ok = 1;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        int l;
        scanf("%i", &l);
        if (l == 1)
        {
            is_ok = 0;
            break;
        }
    }
    
    if (is_ok == 1)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
}