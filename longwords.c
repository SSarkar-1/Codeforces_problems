#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    char words[n][101];
    for (i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
        printf("\n");
    }
    for (j = 0; j < n; j++)
    {
        if (strlen(words[j]) > 10)
        {
            printf("%c%d%c\n", words[j][0], strlen(words[j]) - 2, words[j][strlen(words[j]) - 1]);
        }
        else
        {
            printf("%s\n", words[j]);
        }
    }
    return 0;
}