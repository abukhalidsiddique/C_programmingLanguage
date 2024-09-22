#include<stdio.h>
int main()
{
    int f,l,i,j,count=0;
    printf("Enter first and last number= ");
    scanf("%d%d",&f,&l);
     for(i=f;i<=l;i++)
     {
         for(j=2;j<i;j++)
         {
             if(i%j==0)
            count++;

         }
           if(count==0)

               printf("%d ",i);
              count=0;
    }
}
