#include<stdio.h>
int main()
{
    char a[100],b[10],i,j,len,count=0;
    gets(a);
    gets(b);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        j=0;
        if(a[i]==b[j]&&a[i+1]==b[j+1])
            count++;
    }
        printf("availablr for= %d", count);

}
