#include <stdio.h>
#include <string.h>
int main()
{
    int i, l = 0, n = 0;
    char stones[51];
    scanf("%d", &n);
    scanf("%s", stones);
    for (i = 0; i < strlen(stones) - 1; i++)
    {
        if (stones[i] == stones[i + 1])
            l++;
    }
    printf("%d", l);
    return 0;
}