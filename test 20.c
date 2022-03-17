#include <stdio.h>

#include <stdlib.h>

int main(void) {

int a;

float b,c;

printf("Enter the number \n");

scanf("%f",&b);

a=b;

printf("a= %d \t", a);

printf("b= %f \n",b);

c=b-a;

b=b-a;

printf("a= %d \t", a);

printf("b= %f \t",b);

printf("c= %f \n",c);

if(c==0)

printf("Entered number is integer \n");

else

printf("Entered number is float \n");

return 0;

}
