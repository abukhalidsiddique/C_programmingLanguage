#include<stdio.h>
int main()
{
    int n,temp,r,p=1,sum=0;
    printf("Enter the number= ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0)
     {
         r=temp%10;
         sum=sum+r;
         p=p*r;
         temp=temp/10;
     }
     if(sum==p)
        printf("%d is a spy number", n);
     else
        printf("5d is not a spy number", n);
}
