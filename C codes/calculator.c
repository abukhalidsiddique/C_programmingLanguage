#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter the operator= ");
    scanf("%c", &c);
    if(c=='+')
    {printf("Enter the numbers= ");
         scanf("%d%d", &a, &b);
         printf("Addition= %d", a+b);}
    else if(c=='-')
    {printf("Enter the numbers= ");
         scanf("%d%d", &a, &b);
         printf("substraction= %d", a-b);}
    else if(c=='*')
    {printf("Enter the numbers= ");
    scanf("%d%d", &a, &b);
         printf("multiplication= %d", a*b);}
    else if(c=='+')
    {printf("Enter the numbers= ");
    scanf("%d%d", &a, &b);
         printf("devided= %d", a/b);}
    else if(c=='%')
    {printf("Enter the numbers= ");
    scanf("%d%d", &a, &b);
         printf("modulus= %d", a%b);}

        else
            printf("Error\nPlease try again");
}
