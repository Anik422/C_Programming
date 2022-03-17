#include<stdio.h>
struct Person{
     int age;
     float salary;


};
int main()
{

 struct Person person1,person2;
 printf("Enter information for person1. \n\n Enter age:");
 scanf("%d",&person1.age);
 printf("Enter salary :");
 scanf("%f",&person1.salary);

 printf("person1 =");
 printf("Age = %d\n",person1.age);
 printf("Salary = %.2f\n",person1.salary);

 printf("Enter information for person2. \n\nEnter age:");
 scanf("%d",&person2.age);
 printf("Enter salary :");
 scanf("%f",&person2.salary);
 printf("person2 =");
 printf("Age = %d\n",person2.age);
 printf("Salary = %.2f\n",person2.salary);


     return 0;
}
