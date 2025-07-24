#include <stdio.h>
#include <string.h>
void swap(int *p, int *q)
{
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}
int main()
{
    int n, i, j, max = 0, flag1 = 0, flag2 = 0, k;
    scanf("%d", &n);
    int coins[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (coins[j] > coins[max])
            {
                max = j;
            }
        }
        if (max != i)
        {
            swap(&coins[i], &coins[max]);
        }
    }

    for (i = 0; i < n; i++)
    {
        flag1 = 0;
        flag2 = 0;
        for (j = 0; j <= i; j++)
        {
            flag1 += coins[j];
        }
        for (k = i + 1; k < n; k++)
        {
            flag2 += coins[k];
        }
        if (flag1 > flag2)
        {
            printf("%d", i + 1);
            break;
        }
    }

    return 0;
}