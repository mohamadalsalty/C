#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numbers[101];
int now = 0;

// To count the array items
int count(int num)
{
    //printf("%i\n", num);
    numbers[now] = num;
    return 1;
}


int main()
{
    // To add to the array
    // char user_input[101] = "1+2+5+1+3+1+3";
    char user_input[101];
    scanf("%s", user_input);
    for (int i = 0; i < strlen(user_input); i++)
    {
        if (user_input[i] != '+')
        {
            //   printf("%c\n", user_input[i]);
            count(atoi(&user_input[i]));
            now++;
        }
    }

    //printf("%i", numbers[0]);
    for (int i = 0; i < now - 1; i++)
    {
        for (int j = 0; j < now - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < now; i++)
    {
        if (i != now && i != 0)
        {
            printf("+");
        }
        printf("%i", numbers[i]);
    }

}