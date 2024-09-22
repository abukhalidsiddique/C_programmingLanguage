#include<stdio.h>
int main()
{
    int i,f,l,temp,r,sum=0;
    printf("Enter the first and last numbers= ");
    scanf("%d%d",&f,&l);
    printf("The palindromes numbers:\n");

    for(i=f;i<=l;i++)
    {
        temp=i;
         while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
        if(sum==i)
            printf("%d ",i);
        sum=0;
    }


}
