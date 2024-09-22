#include<stdio.h>
int main()
{
    int a[10]={2,3,4,5,4,3,2,3,4,3};
    int i,p=0,count=0;
    while(p<10)
     {
         count=0;
         for(i=0;i<10;i++)
    {
        if(a[p]==a[i])
            count++;
    }
         printf("%d = %d\n",a[p],count);
         p++;
     }
}

