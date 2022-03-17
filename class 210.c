#include<stdio.h>
//global structure
struct Person
     {
          int age;
          float salary;


     };
int main()
{
     struct Person person1,person2;
     person1.age = 27;
     person1.salary= 27845.25;
     printf("Person1 :\n");
     printf("Age = %d\n",person1.age);
     printf("Salary = %.2f\n",person1.salary);

     person2.age = 28;
     person2.salary= 97845.25;
     printf("Person2 :\n");
     printf("Age = %d\n",person2.age);
     printf("Salary = %.2f\n",person2.salary);

     return 0;
}
