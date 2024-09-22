#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i;
    int *p;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
    p++;
    }
}
