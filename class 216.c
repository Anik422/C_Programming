#include<stdio.h>
struct Person{
     char name[50];
     int age;
     float salary;

};
int main()
{
     struct Person person[4];
     int i;
     for(i=0; i<4; i++)
     {

          printf("\nEnter information for person%d :\n",i+1);
          printf("Enter name :");
          fflush(stdin);
          gets(person[i].name);
          printf("Age =");
          scanf("%d",&person[i].age);
          printf("Salary =");
          scanf("%f",&person[i].salary);
    }


     for(i=0; i<4; i++)
     {
          printf("\n\n Information for Person %d\n",i+1);
          printf("Name : %s\n",person[i].name);
          printf("Age = %d\n",person[i].age);
          printf("Salary = %.2f",person[i].salary);

     }


     return 0;
}
