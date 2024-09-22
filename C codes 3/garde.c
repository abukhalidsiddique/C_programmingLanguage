#include<stdio.h>
int main()
{
    int result;
    printf("Enter the resul= ");
    scanf("%d",&result);
    if(result>100 || result<0)
        printf("Error");
    else if(result>=90 && result<=100)
        printf("A");
    else if(result>=87 && result<=89)
        printf("B+");
    else if(result>=84 && result<=86)
        printf("B");
    else if(result>=80 && result<=83)
        printf("B-");
    else if(result>=77 && result<=79)
        printf("C+");
    else if(result>=74 && result<=76)
        printf("C");
        else if(result>=70 && result<=73)
        printf("C-");
    else if(result>=65 && result<=69)
        printf("D+");
    else if(result>=60 && result<=64)
        printf("D");
    else if(result>=0 && result<60)
        printf("fail");
    else
        printf("ERROR");
}
