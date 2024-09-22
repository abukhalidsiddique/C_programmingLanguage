#include<stdio.h>
int main()
{
    int a=3;
    int *p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%x\n",p);
    printf("%x",&a);
}
