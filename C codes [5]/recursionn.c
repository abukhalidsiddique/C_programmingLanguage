#include<stdio.h>
int main()
{
    int x=6;
    c(x);
}
int c(y)
{
    if(y<=1)
        printf("%d ",c(y-1));
}
