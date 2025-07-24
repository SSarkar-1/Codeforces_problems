#include <stdio.h>
#include <string.h>

int main()
{
    long long int  n, k,i,j,c=0, flag = 1 ;
    scanf("%lld", &n);
    scanf("%lld", &k);
     int num[n];

    for (i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    for (i = 0; i < n; i += 2)
    {
        if (flag == k)
        {
            printf("%d", num[i]);
            c = 1;
            break;
        }
        flag++;
    }
    if (c == 0)
    {
        for (i = 1; i < n; i += 2)
        {
            if (flag == k)
            {
                printf("%d", num[i]);
                break;
            }
            flag++;
        }
    }

    return 0;
}