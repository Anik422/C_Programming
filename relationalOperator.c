/*
>
>=
<
<=
==
!=
control statement - conditional control statement, loop control statement.
 conditional control statement - if-else, switch.
*/
#include<stdio.h>
int main()
{
     int num;
     printf("Enter an Integer number =");
     scanf("%d",&num);
     if(num%2==0)
          printf("Even\n");
     //if(num%2!=0)
     else
          printf("Odd");



     return 0;
}
