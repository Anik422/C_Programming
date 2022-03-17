#include<stdio.h>
#include<math.h>
int main()
{
     double n;
     scanf("%lf",&n);
     double fibon,m,i,j,k;
     m=((1+sqrt(5))/2);
     i=((1-sqrt(5))/2);

     j = pow(m,n);
     k = pow(i,n);

     fibon = (j-k)/sqrt(5);
     printf("%.1lf\n",fibon);




     return 0;
}
