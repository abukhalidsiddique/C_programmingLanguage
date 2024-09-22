#include<stdio.h>
int main()
{
    char x[100];
    char y[100];
    printf("Enter the letters: ");
    scanf("%s",&x);
    printf("Enter the finding letters: ");
    scanf("%s",&y);
    int i,j,len,count=0;;
    len=strlen(x);
    for(i=0;i<len;i++)
    {
        j=0;
        if(x[i]==y[j] && x[i+1]==y[j+1])
        {
            count++;
        }
    }
      printf("The substring is found for %d times", count);
}
