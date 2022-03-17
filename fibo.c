#include<stdio.h>
void fibo_number(int x)
{
     int a,b,sum,i;
     a = 0;
     b = 1;
     for (i=0; i<x; i++)
     {
          printf("%d\n",a);
          sum=a+b;
          a=b;
          b=sum;

     }
}
int main()
{
     int num;
     printf("Enter any number:");
     scanf("%d",&num);
     fibo_number(num);

     return 0;
}
