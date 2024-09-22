#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
          if(count==0)
            printf("%d ",i);
          count=0;

    }
}
