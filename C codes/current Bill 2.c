#include<stdio.h>
int main()
{
    int option, unit;
    float bill;
    printf("1. Industry\n2. Home\n3. Educational Institution");
    printf("\nEnter the option= ");
    scanf("%d", &option);
    if(option==1)
    {
        int hour;
        printf("\n1. peak Hour\n2. Regular Hour");
        printf("\nEnter the hour= ");
        scanf("%d", &hour);
        if(hour==1)
        {
            printf("\nEnter the unit= ");
            scanf("%d", &unit);
            bill= unit*2.5;
        }
        else if(hour==2)
        {
           printf("\nEnter the unit= ");
            scanf("%d", &unit);
            bill= unit*2.1;
        }
        else
            printf("INVALID");
    }

    else if(option==2)
    {
        printf("Enter the unit= ");
        scanf("%d", &unit);
        if(unit>=0 && unit<=20)
            bill=unit*1.5;
        else if(unit>=21 && unit<=40)
            bill=unit*1.8;
        else if(unit>=41 && unit<=60)
            bill=unit*2.2;
        else if(unit>=61 && unit<=80)
            bill=unit*2.5;
        else if(unit>80)
            bill= unit*3.0;
        else
            printf("INVALID");

    }
    else if(option==3)
    {
        printf("Enter the unit= ");
        scanf("%d", &unit);
        bill=unit*3.0;
    }

    else
        printf("INVALID");

    printf("The Bill= %f", bill );

}
