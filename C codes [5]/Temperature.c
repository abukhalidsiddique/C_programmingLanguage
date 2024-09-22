#include<stdio.h>
int main()
{
    int t;
    printf("Enter the temperature= ");
    scanf("%d", &t);
    if(t<0)
        printf("the weather is too cold");
    else if(t>=0 && t<=8)
        printf("The weather is cold");
    else if(t>=9 && t<=12)
        printf("The weather is less cold");
    else if(t>=13 && t<=20)
        printf("The weather is moderate");
    else if(t>=21 && t<=26)
        printf("The weather is neutral");
        else if(t>=27 && t<=30)
        printf("The weather is hot");
    else if(t>=31)
        printf("The weather is too hot");
    else
        printf("error\nplease try again");
}
