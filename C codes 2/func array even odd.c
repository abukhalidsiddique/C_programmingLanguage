#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    even(a);
    odd(a);

}
  int even(int b[10])
  {
      int i;
      printf("The even numbers: ");
      for(i=0;i<10;i++)
      {
          if(b[i]%2==0)
            printf("%d ",b[i]);
      }
  }

  int odd(int c[10])
  {
      int j;
      printf("\nThe odd numbers: ");
      for(j=0;j<10;j++)
      {
          if(c[j]%2!=0)
            printf("%d ",c[j]);
      }
  }
