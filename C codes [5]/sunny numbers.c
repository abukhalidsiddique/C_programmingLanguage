#include<stdio.h>
int main()
{
    int n;
    double  r;
    scanf("%d",&n);
    r=sqrt(n+1);
    if((int)r==r)
        printf("Sunny");
    else
        printf("Not");
}
