#include<stdio.h>
int main()
{
    char s[]="Asif";
    int i,count=0;
    for(i=0;i<4;i++)
    {
        if(s[i]=='s')
        count++;
    }

    if(count==1)
        printf("Founf");
    else
        printf("Not found");
}
