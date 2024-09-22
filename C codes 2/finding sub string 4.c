#include<stdio.h>
int main()
{
    char x[100];
    char y[100];
    gets(x);
    gets(y);
    int i,j,count=0;
    for(i=0;i<'\0';i++)
    {
        j=0;
        if(x[i]==y[j] && x[i+1]==y[j+1])
        {
            count++;
        }
    }
      printf("The sub string is found for %d times", count);
}
