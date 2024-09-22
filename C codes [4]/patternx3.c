
#include<stdio.h>
int main()
{
    int i,j,n=1,space;
    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
        n=1;
    }
    for(i=5-1;i>=1;i--)
    {
        for(space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
        n=1;
    }

}
