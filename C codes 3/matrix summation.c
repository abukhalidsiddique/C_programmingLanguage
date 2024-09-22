#include<stdio.h>
int main()
{
    int a[3][3]={{2,2,2},{2,2,2},{2,2,2}},b[3][3]={{2,2,2},{2,2,2},{2,2,2}},i,j,sum=0,result[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             result[i][j]= a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
}
}

