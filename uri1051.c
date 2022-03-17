#include<stdio.h>
int main()
{
     float n,m,a,b,c,d,e;
     scanf("%f",&n);
     if(n>2000.00)
     {

          if(n<2000.00 && n>=3000.00)
          {
                 m=n-2000.00;
               a=(m*8)/100;
               printf("R$ %.2f\n",a);
          }
          else if(n<3000.00 && n<=4500.00)
          {
                 m=n-2000.00;
                 d=80.00;
                 b=m-1000.00;
                 c=(b*18)/100;
                 e= d+c;
                 printf("R$ %.2f\n",e);
          }
     }
     else
     {
          printf("Isento\n");
     }
     return 0;
}
