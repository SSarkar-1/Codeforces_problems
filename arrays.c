#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,num=0,flag=0;
    scanf("%d",&n);
    int sol=n;
    int arr[n];
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=0;
            j=i;
            while(arr[j]>arr[j+1] && j+1<n)
            {
                flag++;
                j++;
            }
            if(flag>num)
            num=flag;
        }
    }
   
    
    if(flag>0 )
    printf("%d",(flag-1));
    else 
    printf("%d",(n));
    return 0;
}