#include<stdio.h>
int main()
{
    char x;
    printf("Enter the operator: ");
    scanf("%c",&x);
    if(x=='+')
    {
        int a,b;
        printf("Enter the value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
    }
   else if(x=='-')
    {
        int a,b;
        printf("Enter the value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("%d",a-b);
    }
  else  if(x=='*')
    {
        int a,b;
        printf("Enter the value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("%d",a*b);
    }
    else if(x=='/')
    {
        float a,b;
        printf("Enter the value of a and b: ");
        scanf("%f%f",&a,&b);
        printf("%.2f",a/b);
    }
  else  if(x=='%')
    {
        int a,b;
        printf("Enter the value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("%d",a%b);
    }
    else
        printf("Error");
}
