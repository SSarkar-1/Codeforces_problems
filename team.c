#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, j, c = 0;
    scanf("%d", &n);
    printf("\n");
    int arr[n][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i][0] + arr[i][1] + arr[i][2] > 1)
            c++;
    }
    printf("%d", c);
    return 0;
}