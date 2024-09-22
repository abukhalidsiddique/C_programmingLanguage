#include<stdio.h>
int main()
{
    int a=5,b=6,temp;
    int *p,*q;
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("x= %d", *p);
    printf("\ny= %d", *q);
    printf("\nx= %d", p);

}
