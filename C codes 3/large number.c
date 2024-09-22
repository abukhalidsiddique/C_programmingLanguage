#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENter the number=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("max= %d",a);
        else
            printf("max= %d",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("max= %d",b);
        else
            printf("max= %d",c);
    }
    else
        printf("they are equal");
}
