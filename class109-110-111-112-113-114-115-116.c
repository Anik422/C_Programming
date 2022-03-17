#include<stdio.h>
int main()
{
     int num,temp,a=0,sum=0,e=0,r,b,c,d;
     printf("Enter any number :");
     scanf("%d",&num);
     temp=num;
     b=num;
     c=num;
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
     if(a==num)
     {
          printf("The number is Palindrome.\n");
     }
     else
     {
          printf("The number is not palindrome.\n");
          printf("The number Reverse = %d\n",a);
     }
     while(c!=0)
     {
          d=c%10;
          e=e+d*d*d;
          c=c/10;

     }
     if(e==num)
     {
          printf("The number is Armstrong.\n");
     }
     else
     {
          printf("The number is not Armstrong.\n");
     }
     return 0;
}
