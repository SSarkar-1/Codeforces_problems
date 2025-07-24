#include <stdio.h>
#include <string.h>
int main()
{
    char num[101], tmp;
    int i, j;
   
    scanf("%s", num);

    for (i = 0; i < strlen(num) - 1; i++)
    {
        for (j = 0; j < strlen(num) - 1 - i; j++)
        {
            if (num[j] != '+')
            {
                if (num[j] > num[j + 2])
                {
                    tmp = num[j];
                    num[j] = num[j + 2];
                    num[j + 2] = tmp;
                }
            }
        }
    }
    printf("%s", num);
    return 0;
}