#include<stdio.h>
int main()
{
    char c;
    printf("enter the character= ");
    scanf("%c", &c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet", c);
    else if(c>='0' && c<='0')
        printf("%c is a digit", c);
    else
        printf("%c is special character", c);
}
