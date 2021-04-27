#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int num1;
    printf("Enter a number from 1 to 3: ");
    scanf("%i", &num1);

    int x[] = {1,2,3};
    for(int i = 0; i < 3; i++)
    {
        if(x[i] == num1)
        {
            printf("%d, after = %d", x[i], i+1);
        }
    }
}
