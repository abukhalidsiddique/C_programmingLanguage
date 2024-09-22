#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k,sum=0;
    printf("Enter the row and col of a= ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and col of b= ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("The col of a is not equal to the row of b\n");
        printf("Enter the row and col of a= ");
        scanf("%d%d",&r1,&c1);
        printf("Enter the row and col of b= ");
        scanf("%d%d",&r2,&c2);
    }
    printf("Enter the elemens of a=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a[%d][%d]= ", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elemens of b=\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d][%d]= ", i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("a=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
          printf("\n");
    }
    printf("\nb=\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
          printf("\n");
    }
      for(i=0;i<r1;i++)
      {
          for(j=0;j<c2;j++)
          {
              for(k=0;k<c1;k++)
              {
                  sum=sum+a[i][k]*b[k][j];
              }
              result[i][j]=sum;
              sum=0;
          }
      }
      printf("\nresult=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
          printf("\n");
    }
}
