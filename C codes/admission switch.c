#include<stdio.h>
int main()
{
    int option,result;
    printf("Enter the result: ");
    scanf("%d",&result);
    if(result>=40 && result<=100)
    {
        printf("\nEnter the option= ");
        scanf("%d",&option);
         if(option==1)
            printf("Contact BSAg Department");
         if(option==2)
            printf("Contact  BCSE Department");
           else if(option==3)
            printf("Contact  BEEE Department");
          else  if(option==4)
            printf("Contact  BBBA Department");
          else  if(option==5)
            printf("Contact HOSP Department");
        else printf("Error");
    }
    else
        printf("you can not admit . you got F");
    return 0;
}

