#include<stdio.h>
int main()
{
     int num,i,fact,temp,rem,sum=0;
     printf("Enter any Number:");
     scanf("%d",&num);
     temp=num;
     while(temp!=0)
     {

          rem= temp%10;
          fact=1;
          for(i=1; i<=rem;i++)
          {
               fact=fact*i;
          }
          sum=sum+fact;
          temp=temp/10;

     }
     if(sum==num)
     {
          printf("%d is a STRONG number ",num);
     }
     else
     {
          printf("%d is not a STRONG number.",num);
     }

     return 0;
}
