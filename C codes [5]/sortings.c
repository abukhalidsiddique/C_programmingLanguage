#include<stdio.h>
int main()
{
    int a[10]={1,2,0,4,5,3,8,6,5,4,9};
    int temp,i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
       for(i=0;i<10;i++)
       {
             printf("%d ",a[i]);
       }

}
