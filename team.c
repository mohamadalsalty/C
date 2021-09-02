#include <stdio.h>
#include <string.h>

int main()
{
    // Get the questions number
    int n;
    // Correct answers
    int c = 0;
    scanf("%i", &n);


    for (int i = 0; i < n; i++)
    {
        int Petya = 0, Vasya = 0, Tonya = 0;
        scanf("%i %i %i", &Petya, &Vasya, &Tonya);
        int total = Petya + Vasya + Tonya;
        if (total >= 2)
        {
            c++;
        }
    }

    printf("%i", c);

}