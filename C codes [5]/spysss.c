#include<stdio.h>
int main()
{
    int temp,i,r,p=1,sum=0;
    for(i=1;i<1000;i++)
    {     temp=i;
         while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        p=p*r;
        temp=temp/10;
    }
        if(sum==p)
              printf("%d ",i);
              sum=0;
              p=1;
    }

}


