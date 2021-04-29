#include <stdio.h>
#include <cs50.h>
#include <math.h>

// to find the lenght of the credit card
int find_length(long long credit_card_number)
{
    int i = 0;
    long cc = credit_card_number;
    while (cc > 0)
    {
        cc = cc / 10;
        i++;
    }
    // to return the long of the card
    return i;
}

//to check the sum of credit card
bool check_sum(long long credit_card_number)
{
    //15 16 13
    int len = find_length(credit_card_number);
    if (len ==  15 || len == 16 | len == 13)
    {
        return true;
    }
    else
    {
        printf("INVALID\n");
        return false;
    }
}

int main(void)
{
    // TODO Prompt for input
    long long credit_card_number;
    do
    {
        credit_card_number = get_long_long("Number: ");
    }
    while (credit_card_number < 0);
    // TODO Calculate after the lenght check
    if (check_sum(credit_card_number))
    {
        long x = credit_card_number;
        int mod1 = 0;
        int sum1 = 0;
        int mod2 = 0;
        int sum2 = 0;
        int d1 = 0;
        int d2 = 0;
        int total;
        do
        {
            // get the first digit
            mod1 = x % 10;
            x = x / 10;
            sum1 = sum1 + mod1;
            
            // remove second last digit
            mod2 = x % 10;
            x = x / 10;
            
            // double second last digit and add digits to sum2
            mod2 = mod2 * 2;
            d1 = mod2 % 10;
            d2 = mod2 / 10;
            sum2 = sum2 + d1 + d2;


        }
        while (x > 0);
        total = sum1 + sum2;
        
        // TODO check Luhn Algorithm
        if (total % 10 != 0)
        {
            printf("INVALID\n");
            return 0;
        }
        
        // TODO get starting digits
        long start = credit_card_number;
        do
        {
            start = start / 10;
        }
        while (start > 100);
        
        // TODO check card type
        if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
        {
            printf("MASTERCARD\n");
        }
        else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
        {
            printf("AMEX\n");
        }
        else if (start / 10 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
        
        
    }

}

