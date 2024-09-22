#include<stdio.h>
int main()
{
    int f,l,i,j,sum=0;
    printf("Enter the first and last numbers= ");
    scanf("%d%d",&f,&l);
    printf("the perfect numbers\n");
    for(i=f;i<l;i++)
    {
        for(j=1;j<i;j++)
    {
        if(i%j==0)
            sum=sum+j;
    }
       if(sum==i)
        printf("%d ", i);
       sum=0;
    }
}
