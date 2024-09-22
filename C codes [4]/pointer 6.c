#include<stdio.h>

void swap(int *p,int *q)
{
    int temp;
     temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter swapping");
    printf("\nx= %d", *p);
    printf("\ny= %d", *q);
}

int main()
{
    int x=4,y=5;
    printf("Before swapping \nx= %d\ny= %d", x,y);
    swap(&x,&y);
}
