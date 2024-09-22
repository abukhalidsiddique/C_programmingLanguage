#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],result[100][100],r1,r2,c1,c2,i,j;
    printf("Enter the row and column no of a: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the row and column no of b: ");
    scanf("%d %d",&r2,&c2);
    while(r1!=r2 || c1!=c2)
    {
       printf("The row and columns are not equal. try again\n");
       printf("Enter the row and column no of a: ");
       scanf("%d %d",&r1,&c1);
       printf("Enter the row and column no of b: ");
       scanf("%d %d",&r2,&c2);
    }


    printf("Enter the element of a:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the element of b:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               result[i][j]= a[i][j]+b[i][j];
           }
       }
       printf("\naddition:\n");
        for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               printf("%d ",result[i][j]);
           }
             printf("\n");
       }





}
