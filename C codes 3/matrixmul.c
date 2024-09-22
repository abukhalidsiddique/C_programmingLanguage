#include<stdio.h>
int main()
{
    int a[2][3]={{2,2,2},{2,2,2}},b[3][2]={{2,2},{2,2},{2,2}},i,j,k,result[2][3],sum=0;
    printf("The elements of a=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ", a[i][j]);
        }
           printf("\n");
    }
    printf("\nThe elements of b=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d ", b[i][j]);
        }
            printf("\n");
    }

        for(i=0;i<2;i++)
        {

            for(j=0;j<2;j++)
            {
                for(k=0;k<3;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                result[i][j]=sum;
                sum=0;
            }

        }

          printf("\nThe result\n");
          for(i=0;i<2;i++)
          {
              for(j=0;j<2;j++)
              {
                  printf("%d ",result[i][j]);
              }
                printf("\n");
          }
}
