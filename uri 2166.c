#include<stdio.h>
int main()
{
     double n, sum = 0.0;
     scanf("%lf",&n);
     while(n--)
     {
          sum=sum+2.0;
          sum=1.0/sum;
     }
     sum=sum+1.0;
     printf("%.10lf\n",sum);


     return 0;
}
