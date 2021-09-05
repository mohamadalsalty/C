#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char t[101];
    int is_ok = 1;

    scanf("%101[^\n]%*1[\n]", s);
    scanf("%101[^\n]%*1[\n]", t);



    for (int i = 0; i < strlen(s); i++)
    {
        if (t[strlen(t) - i - 1] == s[i])
        {
            is_ok = 1;
        }
        else
        {
            is_ok = 0;
            break;
        }
    }


   if (is_ok == 1)
   {
        printf("YES");       
   }
   else
   {
       printf("NO");
   }

}

