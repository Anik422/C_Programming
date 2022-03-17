#include<stdio.h>
struct Person{
     char name[20];
     int age;
     float salary;

};

void display(struct Person p)
{
     printf("\n\nName : %s\n",p.name);
     printf("Age : %d\n",p.age);
     printf("Salary : %.2f\n",p.salary);
}
int main()
{
     struct Person person1,person2;
     strcpy(person1.name,"Anik Saha");
     person1.age= 20;
     person1.salary= 25876.25;
     display(person1);
     strcpy(person2.name,"Onmay Saha");
     person2.age= 22;
     person2.salary= 15876.25;

     display(person2);


  return 0;
}
