#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char *p, char a)
{
    int k = 0;
    for (k = 0; k < strlen(p); k++)
    {
        if (p[k] == a)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char name[101];
    char arr[101];
    int i, j, flag = 1;
    gets(name);
    arr[0] = name[0];
    for (i = 1; i < strlen(name); i++)
    {
        if (check(arr, name[i]) == true)
        {
            arr[flag] = name[i];
            flag++;
            arr[flag]=0;
        }
    }
   
    if (strlen(arr) % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}