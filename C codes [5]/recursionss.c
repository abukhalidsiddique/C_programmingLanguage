#include<stdio.h>
int main()
{
    printf("%d", div(1));
}
int mul(int x,int y)
{
    return x*y;
}
int add(int a)
{
    return mul(6,7)+a;
}
int sub(int b)
{
    return add(2)-b;
}
int div(int c)
{
    return sub(6)/c;
}
