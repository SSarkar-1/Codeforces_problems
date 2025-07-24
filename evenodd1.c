#include <stdio.h>
#include <string.h>

int main()
{
    long long int n, k, i, flag = 0;
    scanf("%lld", &n);
    scanf("%lld", &k);
    long long int num[n], arr[n];

    for (i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0)
        {
            arr[flag] = num[i];
            flag++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            arr[flag] = num[i];
            flag++;
        }
    }
    printf("%lld", arr[k-1]);
    return 0;
}
