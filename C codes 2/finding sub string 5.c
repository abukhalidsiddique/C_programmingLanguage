#include <stdio.h>
int main()
{
    char n[100],p[100];
    int q,count=0,j;
    printf("enter your name :\n");
    scanf("%s",&n);
    printf("your want to search: \n");
    scanf("%s",&p);
    q=strlen(n);
    for(int i=0;i<q;i++)
    {   j=0;
        if(n[i]==p[j] && n[i+1]==p[j+1])
        {
          count++;
        }

    }
    printf("%d",count);
    return 0;
}
