#include <stdio.h>
#include <string.h>

int main()
{
    int n = 10;
    int a = 0,d = 0;
    int q;
    scanf("%i", &q);
    char all[q];
    scanf("%s", all);


    for (int i = 0; i < q; i++)
    {
        int l = all[i];
        if (l == 65)
        {
            a++;
        }
        else if (l == 68)
        {
            d++;
        }
    }

    if (a < d)
    {
        printf("Danik");
        return 0;
    }
    else if (d < a)
    {
        printf("Anton");
        return 0;
    }
    else
    {
        printf("Friendship");
        return 0;
    }

}