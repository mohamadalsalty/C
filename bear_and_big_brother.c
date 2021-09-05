#include <stdio.h>

int main()
{
    int a, b;
    int counter = 0;
    scanf("%i %i", &a, &b);
    while (a < b || a == b)
    {
        a = a * 3;
        b = b * 2;
        counter++;
    }

    printf("%i", counter);
}