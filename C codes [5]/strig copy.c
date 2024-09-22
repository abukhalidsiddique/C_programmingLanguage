#include<stdio.h>
int main()
{
    char s[100];
   gets(s);
    int d= strlen(s);
     printf("%d",d);

     char b[100];
     strcpy(b,s);
     printf("\n%s",b);

     char c[100]=" asja sas ";
     strcat(s,c);
     printf("\n%s",s);
}
