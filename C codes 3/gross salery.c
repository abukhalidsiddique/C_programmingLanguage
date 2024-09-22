#include<stdio.h>
int main()
{
    int level,gross_salary;
    printf("Enter the level= ");
    scanf("%d", &level);
    switch(level)
    {
    case 1:
        gross_salary= 30000+1000+500; break;
    case 2:
        gross_salary= 28000+750+200; break;
    case 3:
        gross_salary= 26000+500+100; break;
    case 4:
        gross_salary= 25000+250+50; break;
    default:
        printf("INVALID ");
    }
      printf("THE GROSS SALARY= %d ", gross_salary);
}
