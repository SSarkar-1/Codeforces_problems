#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n, x = 0;
    scanf("%d", &n);
    char oper[n][4];
    for (i = 0; i < n; i++)
    {
        scanf("%s", oper[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (oper[i][1] == '+')
            x++;
        if (oper[i][1] == '-')
            x--;
    }
    printf("%d", x);
    return 0;
}