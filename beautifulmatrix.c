#include <stdio.h>
int main()
{
    int matrix[5][5];
    int i,j,a=0,b=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }
    int stdmatrix[5][5]={{4,3,2,3,4},{3,2,1,2,3},{2,1,0,1,2},{3,2,1,2,3},{4,3,2,3,4}};
    printf("%d",stdmatrix[a][b]);

    return 0;
}