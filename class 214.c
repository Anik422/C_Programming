#include<stdio.h>
struct Person{

int age;
float salary;


};


int main()
{
   struct Person person1={25,5482.25};
   struct Person person2,person3;
   person2.age=25;
   person2.salary=5482.25;
   person3=person2;
     if(person1.age==person2.age && person1.salary==person2.salary)
     {
          printf("Person1 equal to Person2\n");
     }
     else
     {
          printf("Person1 not equal to Person2\n");
     }
}
