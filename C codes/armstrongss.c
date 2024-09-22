#include<stdio.h>
int main()
{
    int temp,i,r,sum=0;
    for(i=1;i<1000;i++)
    {     temp=i;
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


