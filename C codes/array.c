#include<stdio.h>
int main()
         {
           int find,i,count=0,a[5]={1,2,3,4,5};
           printf("Enter the find number= ");
           scanf("%d", &find);
           for(i=0;i<5;i++)
           {
               if(a[i]==find)
                count++;
           }
           if(count==1)
            printf("The number is available");
           else
            printf("Sorry the number is not available");
         }
