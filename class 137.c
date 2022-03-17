//sum = 1-2+3-4+5-6+7-8.....n
//sum = (1+3+5+7...n)-(2+4+6+8....n)
#include<stdio.h>
int main()
{
     int n ,even=0,odd=0,i,result;
     printf("Enter any Number =");
     scanf("%d",&n);
     for(i=1; i<=n; i=i+2)
     {
          if(i%2==0)
          {
               even=even+i;
          }
          else
          {
               odd=odd+i;
          }
     }

     result = odd-even;
     printf("The Result is = %d\n",result);

     return 0;
}
