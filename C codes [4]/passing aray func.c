#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d", pass(a,5));
}
int pass(int b[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+b[i];
    }

     return sum;
}
