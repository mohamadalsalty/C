#include <stdio.h>
 
int main()
{
    long long n,m,a;
    scanf("%lli %lli %lli", &n, &m, &a);
 
    long long x = m/a;
    long long y = n/a;
 
    if (m % a != 0)
    {
        x = x + 1;
    }
    if (n % a != 0)
    {
        y = y + 1;
    }
 
    printf("%lli", x * y);
 
}
