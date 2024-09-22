#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter the name: ");
    for(int i=0;i<10;i++)
    {
        scanf("%c",&a[i]);
    }

       for(int j=0;j<10;j++)
       {
           printf("%c", a[j]);
       }
}
