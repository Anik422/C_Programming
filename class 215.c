#include<stdio.h>
struct Person{
     int age;
     float salary;


};
int main()
{
     struct Person person[4];
     int i;
     for(i=0; i<4; i++)
     {
          printf("Enter Person for Person %d\n",i+1);
          printf("Enter age :");
          scanf("%d",&person[i].age);
          printf("Enter salary :");
          scanf("%f",&person[i].salary);
          printf("\n");

     }
     printf("\n\n\n");
     for(i=0; i<4; i++)
     {
          printf("Information for Person %d\n",i+1);
          printf("Age =%d\n",person[i].age);
          printf("Salary =%.2f\n",person[i].salary);
          printf("\n");
     }



     return 0;
}
