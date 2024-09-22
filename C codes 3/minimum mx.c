
#include<stdio.h>
int main()
{
    int a[10]= {2,7,0,3,9,1,8,6,5,4};
    int i,j,temp,min,max;
    min=max=a[0];
    for(i=0;i<10;i++)
    {

        if(min>a[i])
        min= a[i];

    }
     for(i=0;i<10;i++)
    {

        if(max<a[i])
        max= a[i];

    }
      printf("%d ", min);
      printf("\n%d",max);

}
