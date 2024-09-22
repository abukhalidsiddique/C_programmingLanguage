#include<stdio.h>


int min(int a[],int size)
{
    int min=a[0],i=0;
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

      return min;
}
int main()
{
    int n[5]={2,1,3,9,5};
    printf("The minimum is: %d", min(n,5));
}

