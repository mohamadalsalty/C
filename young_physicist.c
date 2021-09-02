#include <stdio.h>

int main()
{
    // Get the numbers of question
    int n, a = 0, b = 0, c = 0;
    int total = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        int a_new,b_new,c_new;
        scanf("%i %i %i", &a_new, &b_new, &c_new);
        a = a + a_new;
        b = b + b_new;
        c = c + c_new;
        
    }
    //printf("%i %i %i", a, b, c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}