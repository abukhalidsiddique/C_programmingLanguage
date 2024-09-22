#include<stdio.h>
int main()
{
    int first=0,second=1,n,count=0,fibo;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
}
