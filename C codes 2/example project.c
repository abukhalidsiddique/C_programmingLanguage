#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     int sal[5][5],s,p,i,j,row,col,temp,per,avg;
     char s_men[10][30],pr[10][30],waste[33];
     clrscr();
     printf("\n\t\t SALES REPORT");
     printf("\n\t\t -------------");
     printf("Enter how many salesman:");
     scanf("%d",&s);
     printf("Enter how many products:");
     scanf("%d",&p);

     gets(waste);
for(i=1;i<=s;i++)
{
     printf("\n Enter the %d name of salesman:",i);
     gets(s_men[i]);
 }
for(j=1;j<=p;j++)
{
     printf("\n Enter the %d name of products:",j);
     gets(pr[j]);
}
for(i=1;i<=s;i++)
for(j=1;j<=p;j++)
     sal[i][j]=0;

     printf("\n\t The salesman and products data:");
while(1)
{

for(i=1;i<=s;i++)
     printf("\n%d salesman :%s",i,s_men[i]);
for(i=1;i<=p;i++)
{
      gotoxy(35,i+1);
      printf("%d Products:%s",i,pr[i]);
}



     gotoxy(5,10);
     printf("\n\n Enter which salesman connected with which products");
     printf("\n Enter the salesman no");
     scanf("%d",&row);
     printf("\n Enter the product no:");
     scanf("%d",&col);
     printf("\n Enter the sales rupees:");
     scanf("%d",&per);
     sal[row][col]=per;
     printf("\n\n Do you want to continue (1 for yes,2 for no):\n");
     scanf("%d",&temp);
     if(temp==1)
     continue;
     else
     break;
  }

  printf("\n\n The salesman and products report:\n\n");
  gotoxy(8,5);
for(i=1;i<=p;i++)
   printf("\t Products %d",i);
   printf("\n");
for(i=1;i<=s;i++)
{
    printf("Salesman %d",i);
for(j=1;j<=p;j++)
    printf("\t%2d\t",sal[i][j]);
    printf("\n\n");
 }
    printf("\n\t Total details:");
for(i=1;i<=s;i++)
{
    avg=0;
for(j=1;j<=p;j++)
    avg=avg+sal[i][j];
    printf("\n The total rupees sold by salesman %d is %d",i,avg);
   }
 getch();
}
