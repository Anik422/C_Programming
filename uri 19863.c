#include<stdio.h>
int main()
{
     double a,b,i,j;
     scanf("%lf %lf",&a,&b);
     i=b-a;
     j=(i/a)*100;
     printf("%.2lf%%\n",j)  ;


     return 0;
}
