#include<stdio.h>
int main()
{
    int  sum=0,i,n;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
          if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("%d is a perfect number", n);
    else
            printf("%d is not a perfect number", n);
}
