#include<stdio.h>
int main()
{
    int x=5;
    printf("%d",add(x));
}

int add(int a)
{
    if(a==1)
        return 1;
    else
        return a*add(a-1);
}
