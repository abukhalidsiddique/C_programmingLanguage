#include<stdio.h>
int main()
{
    int n,i,temp,sum=0,r;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         temp=i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
      if(sum==i)
        printf("%d ",i);
      sum=0;
    }
}
