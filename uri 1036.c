#include<stdio.h>
int main()
{
     double a,b,c,r1,r2;
     scanf("%lf%lf%lf",&a,&b,&c);
     r1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
     r2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
     if((int)a==0||b<c)
     {
          printf("Impossivel calcular\n");
     }
     else
     {
          printf("R1 = %.5lf\n",r1);
          printf("R2 = %.5lf\n",r2);
     }


     return 0;
}
