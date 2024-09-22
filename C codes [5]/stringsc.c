#include<stdio.h>
int main()
{
    char b[100]="Abu Khalid Siddique";
    int a=0;
    while(b[a]!='\0')
    {
        printf("%c", b[a]);
        a++;
    }
}
