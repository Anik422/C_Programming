#include<stdio.h>
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d",&n);

     if(n>100 || n<0)
          printf("Mark Invalid");
     else if(n>=80 && n<=100)
          printf("A+");
     else if(n>=70)
          printf("A");
     else if(n>=60)
          printf("A-");
     else if(n>=50)
          printf("B");
     else if(n>=40)
          printf("C");
     else if(n>=33)
          printf("D");
     else
          printf("F");
     return 0;
}
