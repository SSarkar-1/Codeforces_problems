#include <stdio.h>
#include <string.h>
void strlwr(char *p, int l)
{
    int i = 0;
    for (i = 0; i < l; i++)
    {
        if (*(p + i) >=65 && *(p + i) <= 90)
        {
            *(p + i) = *(p + i) + 32;
        }
    }
}
int main()
{
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    strlwr(str1, strlen(str1));
    strlwr(str2, strlen(str2));
    if (strcmp(str1, str2) < 0)
    {
        printf("%d", -1);
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}