#include<stdio.h>
int main()
{
    int x=10,y=5,z=1,m;
    m=x+y+z;
    printf("Sum= %d",m);
    int *p;
    p=&m;
    printf("\nSum= %d", *p);

}

