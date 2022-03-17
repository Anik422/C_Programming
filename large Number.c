#include<stdio.h>
int main()

{
     int num1,num2;

     printf ("Enter first number :");
     scanf("%d",&num1);

     printf ("Enter Second number :");
     scanf("%d",&num2);

     if(num1>num2)

          printf("The Large number is = %d\n",num1);


     else if(num1<num2)

          printf("The Large number id = %d\n",num2);
     else
          printf("The Number is equal ");



     return 0;

}
