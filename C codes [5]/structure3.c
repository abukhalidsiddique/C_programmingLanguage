
#include<Stdio.h>
int main()
{
    struct person
    {
        char name[100];
        int age;
        float salary;
    };
    struct person person1,person2,person3;
    person1.name[100]="Asif";
    person1.age= 28;
    person1.salary=35000.50;
    printf("Person1:");
    printf("\nName= %s",person1.name);
    printf("\nage= %d",person1.age);
    printf("\nsalary= %f",person1.salary);

    person2.name[100]="Khalid";
    person2.age= 27;
    person2.salary=33000.50;
    printf("\nPerson2:");
    printf("\nName= %s",person2.name);
    printf("\nage= %d",person2.age);
    printf("\nsalary= %f",person2.salary);

    person3.name[100]="Siddique";
    person3.age= 28;
    person3.salary=35000.50;
    printf("\nPerson3:");
    printf("\nName= %s",person3.name);
    printf("\nage= %d",person3.age);
    printf("\nsalary= %f",person3.salary);


}
