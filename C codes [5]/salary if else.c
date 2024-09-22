#include<stdio.h>
int main()
{
    int level,salary;
    printf("Enter the level: ");
    scanf("%d",&level);
    if(level==1)
    {
       salary=30000+1000+500;
    }
    else if(level==2)
    {
        salary= 28000+750+200;
    }
    else if(level==3)
    {
        salary=26000+500+100;
    }
    else if(level==4)
    {
        salary= 25000+250+50;
    }

    printf("%d",salary);
}
