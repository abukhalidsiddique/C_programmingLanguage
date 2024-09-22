#include<stdio.h>
int main()
{
    char c;
    int a,b;
    printf("ENter the operator= ");
    scanf("%c", &c);
    switch(c)
    {
    case '+':
        {
            printf("Enter the numbers= ");
            scanf("%d%d", &a,&b);
            printf("Addition= %d", a+b);
        }   break;
        case '-':
        {
            printf("Enter the numbers= ");
            scanf("%d%d", &a,&b);
            printf("Substraction= %d", a-b);
        }   break;
        case '*':
        {
            printf("Enter the numbers= ");
            scanf("%d%d", &a,&b);
            printf("Multiplication= %d", a*b);
        }    break;
        case '/':
        {
            printf("Enter the numbers= ");
            scanf("%d%d", &a,&b);
            printf("devided= %d", a/b);
        }   break;
        case '%':
        {
            printf("Enter the numbers= ");
            scanf("%d%d", &a,&b);
            printf("Modulus= %d", a%b);
        }   break;
        default:
            printf("Invalid");
}
}
