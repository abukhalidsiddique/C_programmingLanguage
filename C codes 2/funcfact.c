#include<stdio.h>
int main()
{
    int n=5;
    printf("%d",fact(n));
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
