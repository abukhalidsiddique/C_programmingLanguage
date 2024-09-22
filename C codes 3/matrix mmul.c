#include<stdio.h>
int main()
{
    int a[3][2]={{2,2},{2,2},{2,2}},b[2][3]={{2,2,2},{2,2,2}},i,j,k,sum=0,result[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
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
