#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers= ");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c)
        printf("Max= a");
    else if(b>a && b>c)
        printf("Max= b");
    else if(c>a && c>b)
        printf("Max=c");
    else
        printf("The numbers are equal");
}
