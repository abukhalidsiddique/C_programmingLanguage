#include<stdio.h>

 struct person
{
    int age;
        float salary;
};


    struct person person1, person2;

int main()
{


    person1.age= 23;
    person1.salary=25000;
    printf("Person 1:\n");
    printf("age= %d\n",person1.age);
    printf("salary= %f",person1.salary);

    person2.age= 24;
    person2.salary=26000;
    printf("\nPerson 2:\n");
    printf("age= %d\n",person2.age);
    printf("salary= %f",person2.salary);
}

