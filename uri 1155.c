#include<stdio.h>
int main()
{
     int n=100,i;
     double sum=0;
     for(i=1; i<=n; i++)
     {
          sum=sum+(1.00/i);
     }

     printf("%.2lf\n",sum);
     return 0;
}
