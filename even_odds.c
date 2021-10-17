#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main()
{
    long n, k;
    // (7 - 1) * 2 + 1
    scanf("%ld %ld", &n, &k);
    long c = 1;
    long midPoint = n / 2;


    if (n % 2 != 0)
    {
        midPoint++;
    }

    // printf("%ld", midPoint);


    if (k <= midPoint)
    {
        long ans = (k - 1) * 2 + 1;
        printf("%1ld", ans);
    }
    else
    {
        long ans = (k - midPoint) * 2;
        printf("%1ld", ans);
    }



}