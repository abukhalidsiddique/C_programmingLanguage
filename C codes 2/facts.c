#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d", fact);
}
