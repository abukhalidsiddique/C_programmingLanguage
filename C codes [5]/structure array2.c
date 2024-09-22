#include<stdio.h>

struct person
{
    char name[50];
    int age;
    int salary;
};

    struct person person[4];

int main()
{
   int i;
   for(i=0;i<4;i++)
   {
       printf("Enter the name of person %d: ",i+1);
       fflush(stdin);
       gets(person[i].name);
       printf("Enter the age= ");
       scanf("%d",&person[i].age);
       printf("Enter the salary= ");
       scanf("%d",&person[i].salary);
    }

    for(i=0;i<4;i++)
    {
        printf("\nName: %s",person[i].name);
        printf("\nAge: %d",person[i].age);
        printf("\nSalary: %d",person[i].salary);
    }
}
