#include<stdio.h>
int main()
{
    int i,j,space,a=50;
    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a--;a--;
        }
        a=50;
        printf("\n");
    }
}
