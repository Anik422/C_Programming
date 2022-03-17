#include<stdio.h>
int main()
{

     double A,B,C,PI=3.14159,a,b,c,d,e;
     scanf("%lf %lf %lf",&A,&B,&C);

     a=(A*C)/2;
     printf("TRIANGULO: %.3lf\n",a);

     b=PI*C*C;
     printf("CIRCULO: %.3lf\n",b);

     c=((A+B)*C)/2;
     printf("TRAPEZIO: %.3lf\n",c);

     d= B*B;
     printf("QUADRADO: %.3lf\n",d);

     e=A*B;
     printf("RETANGULO: %.3lf\n",e);


     return 0;
}
