#include<stdio.h>
int main()
{
    char a;
    printf("Enter a= ");
    scanf("%c",&a);
    if(a>='0' && a<='9')
    printf("Digit");
    else if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        printf("Alphabet");
    else
        printf("Symbolic character");
}
