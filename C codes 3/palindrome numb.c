#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
        if(sum==n)
              {printf("%d is palindrome number",n);}
              else
                   {printf("%d is not a palindrome number",n);}
}
