
#include<Stdio.h>

struct person
    {

        int age;
        float salary;
    };

int main()
{

    struct person person1={25,26000.50};
    struct person person2,person3;

    person2.age= 27;
    person2.salary=33000.50;

    person3=person2;

    printf("\nPerson1:");
    printf("\nage= %d",person1.age);
    printf("\nsalary= %.2f",person1.salary);



    printf("\nPerson2:");
    printf("\nage= %d",person2.age);
    printf("\nsalary= %.2f",person2.salary);

    printf("\nPerson3:");
    printf("\nage= %d",person3.age);
    printf("\nsalary= %.2f",person3.salary);


}

