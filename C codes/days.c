#include<stdio.h>
int main()
{
    int d,day,years,months,weeks,days;
    printf("Enter the days: ");
    scanf("%d",&day);
    d=day;
    years=d/365;
    d=d%365;
    months=d/30;
    d=d%30;
    weeks=d/7;
    d=d%7;
    days=d/1;

    printf("%d days: %d years, %d months, %d weeks, %d days",day,years,months,weeks,days);


}
