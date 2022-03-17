#include<stdio.h>
int main()
{
     int n[100],i;
     double num,k,temp;
     scanf("%lf",&num);
     temp=num;
     for(i=0; i<100; i++)
     {

          printf("N[%d] = %.4lf\n",i,temp);
           k = temp /2;
          temp=k;
     }

     return 0;
}
