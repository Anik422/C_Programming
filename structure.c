#include<stdio.h>
//global structure
struct Person{
      int age;
      float salary;
};

int main()
{
      struct Person person1, person2;
      person1.age = 27;
      person1.salary = 2790.87;
      printf("Age = %d\n",person1.age);
      printf("Salary = %.2f\n",person1.salary);
      return 0;
}
