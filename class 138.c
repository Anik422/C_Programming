#include<stdio.h>
int main()
{
     int n,fist=0,secand=1,count=0,fibo ;
     printf("Enter any number :");
     scanf("%d",&n);
     while(count<n)
     {
          if(count<=1)
          {
               fibo=count;
          }
          else
          {
               fibo=fist+secand;
               fist=secand;
               secand=fibo;
          }
          printf("%d ",fibo);

          count++;

     }



     getch();
}
