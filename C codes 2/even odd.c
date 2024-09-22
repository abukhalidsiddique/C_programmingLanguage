#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    x(a,10);
}
void x(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(b[i]%2!=0)
            printf("%d ", b[i]);
    }
}
