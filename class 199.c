#include<stdio.h>
void sum(int a,int b,int c)
{
     printf("The SUM is = %d\n",a+b+c);
}
void sub(int a, int b)
{
     printf("The SUBTRACTION is : %d\n",a-b);
}

int main()
{

     sum(100,50,24);
     sum(520,35,36);
     sum (587,98,75);
     sub(802,93);
     sub(872,952);

     return 0;
}
