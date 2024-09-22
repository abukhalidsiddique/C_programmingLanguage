#include<stdio.h>
int main()
{
    int n,i,temp,r,sum=0;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
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

