#include<stdio.h>
int main()
{
    int a[10]={1,2,0,4,5,3,6,5,4,9};
    int i,min,max;
    min=max=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }

      printf("%d", min);
      printf("\n%d",max);



}

