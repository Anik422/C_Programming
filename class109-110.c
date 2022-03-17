#include<stdio.h>
int main()
{
     int num,temp,a=0,sum=0,r,b;
     printf("Enter any number :");
     scanf("%d",&num);
     temp=num;
     b=num;
     while(temp!=0)
     {
          r=temp%10;
          sum=sum+r;
          temp=temp/10;

     }
     printf("The sum is = %d\n",sum);
     while(b!=0)
     {
          r=b%10;
          a=(a*10)+r;
          b=b/10;
     }
     printf("Tne number Reverse = %d",a);
     return 0;
}
