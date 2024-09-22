#include<Stdio.h>

struct person
{
    int age;
    float salary;
};

struct person person1,person2;




int main()
{
   person1.age= 23;
   person1.salary=27777.50;
   printf("Person1:\n");
   printf("age= %d", person1.age);
   printf("\nsalary= %d", person1.salary);

    person2.age= 24;
   person2.salary=28777.50;
   printf("\nPerson2:\n");
   printf("age= %d", person2.age);
   printf("\nsalary= %d", person2.salary);


}
