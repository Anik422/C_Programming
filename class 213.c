
#include<stdio.h>
struct Person{
     int age;
     float salary;


};
int main()
{

 struct Person person1={27,2550.25};//local variable
 struct Person person2,person3;
 //element wise assignment
 person2.age = 25;
 person2.salary=5478.25;
//structure variable assignment
person3=person2;

 printf("person1 :\n");
 printf("Age = %d\n",person1.age);
 printf("Salary = %.2f\n",person1.salary);


 printf("person2 :\n");
 printf("Age = %d\n",person2.age);
 printf("Salary = %.2f\n",person2.salary);

 printf("person3 :\n");
 printf("Age = %d\n",person3.age);
 printf("Salary = %.2f\n",person3.salary);


     return 0;
}
