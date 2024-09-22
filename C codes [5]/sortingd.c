#include<stdio.h>
int main()
{
    int a[6]={6,5,4,3,8,9};
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   for(i=0;i<6;i++)
   {
       printf("%d ",a[i]);
   }
}
