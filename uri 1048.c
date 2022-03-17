#include<stdio.h>
int main()
{
          float n,a,b;

     scanf("%f",&n);
     if( n>0 && n<=400.00)
     {
          a = (n*15)/100;
          b = (a+n);

          printf("Novo salario: %.2f\n",b);
          printf("Reajuste ganho: %.2f\n",a);
          printf("Em percentual: 15 %%\n");
     }
     else if( n>400.01 && n<=800.00)
     {
          a = (n*12)/100;
          b = (a+n);

          printf("Novo salario: %.2f\n",b);
          printf("Reajuste ganho: %.2f\n",a);
          printf("Em percentual: 12 %%\n");
     }
     else if( n>800.01 && n<=1200.00)
     {
          a = (n*10)/100;
          b = (a+n);

          printf("Novo salario: %.2f\n",b);
          printf("Reajuste ganho: %.2f\n",a);
          printf("Em percentual: 10 %%\n");
     }
     else if( n>1200.01 && n<=2000.00)
     {
          a = (n*7)/100;
          b = (a+n);

          printf("Novo salario: %.2f\n",b);
          printf("Reajuste ganho: %.2f\n",a);
          printf("Em percentual: 7 %%\n");
     }
     else if(n>2000.00)
     {
          a = (n*4)/100;
          b = (a+n);

          printf("Novo salario: %.2f\n",b);
          printf("Reajuste ganho: %.2f\n",a);
          printf("Em percentual: 4 %%\n");
     }


     return 0;
}
