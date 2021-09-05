#include<stdio.h>

int main()
{
    
    int n;
    int j,p = 0;

    scanf("%d%d",&n,&j);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0 ; i < n; i++)
    {
        if(a[i] >= a[j - 1] && a[i] > 0)
        {
            p++;
        }
    }

    printf("%d",p);

    return 0;
}