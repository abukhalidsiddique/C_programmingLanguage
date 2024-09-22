#include<Stdio.h>
int main()
{
    int f,l,i,j,count=0;
    printf("Enter first and last numbers= ");
    scanf("%d%d",&f,&l);
    printf("The prime numbers= ");
    for(i=f;i<=l;i++)
    {
         for(j=2;j<i;j++)
    {
        if(i%j==0)
           {
               count++;
              break;
           }
    }
       if(count==0)
        printf("%d ",i);
        count=0;
    }
}

