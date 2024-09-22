#include<stdio.h>
int main()
{
    int a[6]={6,5,4,3,8,9};
    int i,min,max;
    min=max=a[0];
    for(i=0;i<6;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    for(i=0;i<6;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("%d ",min);
    printf("\n%d ",max);

}

