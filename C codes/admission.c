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
        switch(option)
        {
            case 1: printf("contact the BSAg department"); break;
            case 2: printf("contact the BCSE department"); break;
            case 3: printf("contact the BEEE department"); break;
            case 4: printf("contact the BBBA department"); break;
            default: printf("Error");
        }
    }
    else
        printf("Error");
    return 0;
}
