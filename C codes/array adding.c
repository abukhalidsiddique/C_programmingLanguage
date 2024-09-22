#include<stdio.h>
int main()
{
    int a[10]={2,3,4,5,6,7,8,7,6,5};
    int b[10],sum[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0;i<10;i++)
    {
        sum[i]=a[i]+b[i];
    }
      for(i=0;i<10;i++)
      {
          printf("%d ", sum[i]);
      }

}
