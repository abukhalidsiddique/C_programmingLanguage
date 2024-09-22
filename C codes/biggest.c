#include<stdio.h>
int main()
{
    int a=8,b=2,c=6;
    if(a>b && a>c)
       printf("Biggest = %d",a);
       else if(b>a&&b>c)
         printf("Biggest = %d", b);
            else if(c>a && c>b)
                printf("bIGGEST= %d",c);
            else
                printf("They are equal");
}
