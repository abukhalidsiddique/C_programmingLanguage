#include<stdio.h>
int main()
{
    int a[10],i,p=0,n,count=0;
    printf("Enter the n= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    while(p!=n)
    {
         count=0;
        for(i=0;i<n;i++)
        {
            if(a[p]==a[i])
            count++;
        }
          printf("%d= %d\n",a[p],count);
          p++;


    }
}
