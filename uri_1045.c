#include<stdio.h>
int main()
{
     double A,B,C,a,b,c;
     scanf("%lf%lf%lf",&A,&B,&C);
     a= A*A;
     b= B*B;
     c= C*C;
     if(A>=(B+C)||B>=(A+C)||C>=(A+B))
     {
          printf("NAO FORMA TRIANGULO\n");
     }
     else if(a==(b+c)|| b==(a+c)|| c==(a+b))
     {
          printf("TRIANGULO RETANGULO\n");
     }
     else if(a>(b+c)|| b>(a+c)|| c>(a+b))
     {
          printf("TRIANGULO OBTUSANGULO\n");
     }
    else if(a<(b+c)|| b<(a+c)|| c<(a+b))
     {
          printf("TRIANGULO ACUTANGULO\n");
     }
     if(A==B&&B==C)
     {
          printf("TRIANGULO EQUILATERO\n");
     }
     if((A==B&&B!=C)||(A==C&&B!=C)||(B==C&&A!=B))
     {
          printf("TRIANGULO ISOSCELES\n");
     }





     return 0;
}
