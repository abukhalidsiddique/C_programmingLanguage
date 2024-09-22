#include<stdio.h>

int sum(int a)
{
    if(a==1)
        return 1;
    else
    {
        return a+sum(a-1);
    }
}


int main()
{
    int n=3;
    printf("%d", sum(n));
}

