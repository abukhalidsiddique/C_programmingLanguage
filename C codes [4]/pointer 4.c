#include<stdio.h>
int main()
{
    int x=10,y=5,sum;

    int *p,*q;
    p=&x;
    q=&y;
    sum=*p+*q;
    printf("Sum= %d", sum);

}


