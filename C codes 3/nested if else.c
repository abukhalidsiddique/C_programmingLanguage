#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers= ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("Max= %d", a);
        else
            printf("Max= %d", b);
    }

    else
    {
        if(b>c)
        printf("Max= %d", b);
        else
            printf("Max= %d", c);
    }
}
