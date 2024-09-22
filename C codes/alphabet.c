#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character= ");
    scanf("%c",&c);
    if(c>='a'&&c<='z' || c>='A' && c<='Z')
        printf("%c , The character is an Alphabet",c);
    else
        printf("%c , The character is not an Alphabet", c);
}
