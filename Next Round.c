#include <stdio.h>
#include <string.h>
int main()
{
    int n, k, i, c = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}