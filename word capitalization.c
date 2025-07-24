#include <stdio.h>
#include <string.h>
int main()
{
    char word[1001];
    int i;
    gets(word);
    if(97<=word[0]) 
    {
        word[0]=word[0]-32;
    }
    puts(word);
    return 0;
}