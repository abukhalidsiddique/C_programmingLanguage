#include<stdio.h>
int main()
{
    int a[10]={2,6,7,3,4,6,7,6,5,4};
    int i,j,temp;

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
