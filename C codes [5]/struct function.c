#include<stdio.h>

struct person
{
    char name[20];
    int age;
    int salary;
};

     struct person person1,person2;

int main()
{
    strcpy(person1.name,"Khalid");
    person1.age=29;
    person1.salary=45000;

    strcpy(person2.name,"Siddique");
    person2.age=29;
    person2.salary=45000;

    display(person1);
    display2(person2);
}

void display(struct person p)
{
    printf("%s",p.name);
    printf("\nage= %d",p.age);
    printf("\nsalary= %d",p.salary);
}
void display2(struct person q)
{
    printf("\n%s",q.name);
    printf("\nage= %d",q.age);
    printf("\nsalary= %d",q.salary);
}
