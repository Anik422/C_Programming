#include<stdio.h>
int main()
{
     int a,b,c,d;
     float e,f,x,y,v;
     scanf("%d %d %f",&a, &b, &e);
     scanf("%d %d %f",&c, &d, &f);
     x = b*e;
     y = d*f;
     v= x+y;
     printf("VALOR A PAGAR: R$ %.2f\n",v);



     return 0;
}
