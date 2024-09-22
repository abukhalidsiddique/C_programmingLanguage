#include<stdio.h>
int main()
{
    int x=10,y=5,z=1;
    int *p;
    p=&x;
    printf("x= %d",*p);
    p=&y;
    printf("\ny= %d",*p);
    p=&z;
    printf("\nz= %d",*p);
}
