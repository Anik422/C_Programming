#include<stdio.h>

/*int fact_number(int x)
{
     int initial = 1,i;
     for(i=1; i<=x; i++)
     {
          initial *= i;
     }
     return initial;
}*/

int main()
{

     int num,result,i;
     printf("Enter any integer number :");
     scanf("%d",&num);
     result = 1;
     //result = fact_number(num); // use function
     for(i=1; i<=num; i++)
     {
          result *= i;
     }
     printf("%d number of factorial = %d\n",num,result);


     return 0;
}
