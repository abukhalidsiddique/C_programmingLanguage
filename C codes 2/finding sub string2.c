#include<stdio.h>
int main()
{
    char x[100];

    gets(x);

    int i,len,count=0;
    len=strlen(x);
    for(i=0;i<len;i++)
    {
        if(x[i]=='a')
        {
         count++;
        }
    }
    printf("The substring is available for %d times",count);
}

