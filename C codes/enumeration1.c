#include<stdio.h>

enum days_of_weeks
{
   sat,sun,mon,tue,wed,thu,fri
};

int main()
{
    enum days_of_weeks day1, day2;
    day1= sun;
    day2= fri;
    int dif;
    dif= day2-day1;

    printf("day1= %d",day1);
    printf("\nday2= %d",day2);
    printf("\nThe dif= %d",dif);
}
