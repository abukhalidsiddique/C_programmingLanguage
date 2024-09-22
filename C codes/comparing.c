#include<stdio.h>
int main()
{
char a[100]="asasdaasasasas";
char b[100]="as";
int len= strlen(a);
int i,j,count=0;
for(i=0;i<len;i++)
{
       j=0;
        if(a[i]==b[j]&&a[i+1]==b[j+1])
            count++;
}
  printf("%d ",count);
}
