
#include<Stdio.h>

 struct person
    {
        char name[100];
        int age;
        float salary;
    };

    struct person person1,person2,person3;

int main()
{
    printf("Enter the name of person1: ");
    gets(person1.name);
     printf("\nEnter the age of person1: ");
     scanf("%d", &person1.age);
     printf("\nEnter the salary of person1: ");
     scanf("%f", &person1.salary);
    printf("\nPerson1: ");
    puts(person1.name);
    printf("\nage= %d",person1.age);
    printf("\nsalary= %f\n",person1.salary);

     printf("\nEnter the name of person2: ");
     gets(person2.name);
     printf("\nEnter the age of person2: ");
     scanf("%d", &person2.age);
     printf("\nEnter the salary of person2: ");
     scanf("%f", &person2.salary);
    printf("\nPerson2: ");
    puts(person2.name);
    printf("\nage= %d",person2.age);
    printf("\nsalary= %f",person2.salary);

    printf("\nEnter the name of person3: ");
    gets(person3.name);
     printf("\nEnter the age of person3: ");
     scanf("%d", &person3.age);
     printf("\nEnter the salary of person3: ");
     scanf("%f", &person3.salary);
    printf("\nPerson3: ");
    puts(person3.name);
    printf("\nage= %d",person3.age);
    printf("\nsalary= %f",person3.salary);
}

