#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag = 0, c = 0;
    char p[101];
    scanf("%s", p);
    for (i = 0; i < strlen(p) - 1; i++)
    {
        flag = 0;
        j = i;
        while (p[j] == p[j + 1] && j + 1 < strlen(p))
        {
            flag++;
            j++;
            if (flag >= 6)
            {
                printf("YES");
                c = 1;
                break;
            }
        }
        if (c == 1)
            break;
    }
    if (c == 0)
        printf("NO");

    return 0;
}