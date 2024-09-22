#include<stdio.h>
int main()
{
    char x;
    int a,b;
    printf("Enter the operator: ");
    scanf("%c",&x);
    printf("Enter the numbers= ");
    scanf("%d%d",&a,&b);
    switch(x)
    {
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        case '%': printf("%d",a%b); break;

    default: printf("Error");

    }
}
