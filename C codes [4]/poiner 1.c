#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("The value of a= %d",a);
    printf("\nThe address of a= %d",&a);
    printf("\nThe address of a by using poiter p= %d",p);
    printf("\nThe value of a by usinf poiner *p= %d",*p);
    printf("\nThe address of p pointer= %d",&p);
}
