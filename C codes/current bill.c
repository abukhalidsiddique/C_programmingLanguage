#include<stdio.h>
int main()
{
    int unit,option;
    float bill;;
    printf("Choose the options:\n1. Industry\n2. Home\n3. Educational Institutions\n");
    scanf("%d",&option);
    if(option==1)
    {
        printf("\nEnter the consumed unit= ");
        scanf("%d",&unit);
        int hour;
        printf("\nChoose the hour type:\n1. Peak Hour\n2. Regular Hour\n");
        scanf("%d",&hour);
        if(hour==1)
        {
            bill=2.5*unit;
        }
        else if(hour==2)
        {
            bill=2.1*unit;
        }
    }
    else if(option==2)
    {
        printf("Enter the consumed unit= ");
        scanf("%d",&unit);
        if(unit>=0 && unit<=20)
        {bill=unit*1.5;}
        else if(unit>=21 && unit<=40)
        {bill=unit*1.8;}
        else if(unit>=41 && unit<=60)
        {bill=unit*2.2;}
        else if(unit>=61 && unit<=80)
        {bill=unit*2.5;}
        else if(unit>=81)
        {bill=unit*3;}
        else
              printf("Error");
    }
    else if(option==3)
    {
        printf("Enter the consumed unit= ");
        scanf("%d",&unit);
        bill=unit*3;
    }
    else
        printf("Error");
    printf("Bill= %f", bill);
    return 0;
}
