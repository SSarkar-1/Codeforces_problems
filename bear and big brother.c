#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, n = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while (b >= a)
    {
        a = a * 3;
        b = b * 2;
        n++;
    }
    printf("%d", n);
    return 0;
}