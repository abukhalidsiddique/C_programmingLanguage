#include<stdio.h>
int main()
{
    char x[100];


    gets(x);

    int i,j,len,count=0;
    len=strlen(x);
    for(i=0;i<len;i++)
    {
        if(x[i]=='a')
        {

            for(j=1;j<len;j++)
            {
                if(x[j]=='b')
                {
                    count++;
                }
            }
        }
    }
    printf("The substring is available for %d times",count);
}
