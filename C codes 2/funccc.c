#include<stdio.h>
int main()
{
    printf("%d",div(1));
}
int add(int x)
{
    return x;
}
int sub(int y)
{
    return add(7)-y;
}
int mul (int z)
{
    return sub(5)*z;
}
int div(int d)
{
    return mul(4)/d;
}

