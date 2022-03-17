#include<stdio.h>
int main()
{

     double num1,num2,calculat;
     char oper;

     printf("Enter any operator (+,-,*,/) : \n");
     scanf("%c",&oper);
     printf("Enter two Number : ");
     scanf("%lf%lf",&num1,&num2);

     switch(oper)
      {
      case '+':
          {
               calculat = num1 + num2;
               printf("Result = %.2lf",calculat);
                    break;

          }

          case '-':
          {
               calculat = num1 - num2;
               printf("Result = %.2lf",calculat);
                    break;

          }

          case '*':
          {
               calculat = num1 * num2;
               printf("Result = %.2lf",calculat);
                    break;

          }

          case '/':
          {
               calculat = num1 / num2;
               printf("Result = %.2lf",calculat);
                    break;

          }

         default:
          printf("Error! try aging.");
      }



     return 0;
}
