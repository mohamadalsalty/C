#include <stdio.h>
#include <string.h>

int main()
{
    // Get the inputs
    char players[100];
    scanf("%s", players);
    int len = strlen(players);
    int seq = 0;

    for (int i = 0; i < len; i++)
    {
        int seq_now = 0;
        for (int x = 0; x < i; x++)
        {
            if (players[i] == players[x])
            {
                seq_now++;
            }
            else
            {
                seq_now = 0;
            }
        }

        if (seq_now > seq)
        {
            seq = seq_now;
        }

    }

    if (seq + 1 >= 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}