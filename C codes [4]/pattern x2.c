#include<stdio.h>
int main()
{
    int i,j,n=50,space;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n--;n--;
        }
        printf("\n");
        n=50;
    }
}
