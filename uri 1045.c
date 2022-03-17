#include<stdio.h>
#include<math.h>
int main()
{
     double A,B,C,a,b,c,BC,bc;
     scanf("%lf %lf %lf",&A,&B,&C);
     a = pow(A,2);
     b = pow(B,2);
     c = pow(C,2);
     BC = A+B;
     bc = b+c;
     if(A>=BC)
     {
          printf("NAO FORMA TRIANGULO\n");
     }
      if(a==bc)
     {
          printf(" TRIANGULO RETANGULO\n");
     }
      if(a>bc)
     {
          printf("TRIANGULO OBTUSANGULO\n");
     }
      if(a<bc)
     {
          printf("TRIANGULO ACUTANGULO\n");
     }
      if(A==B && B==C &&A==C)
     {
          printf("TRIANGULO EQUILATERO\n");
     }
     if(A==B || B==C || A==C)
     {
          printf("TRIANGULO ISOSCELES\n");
     }

     return 0;


}
