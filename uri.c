#include<stdio.h>
int main()
{
     int a,b,y;
     int x;
     scanf("%d%d",&a,&b);
     if(a>b)
     {
          x= 24-a;
          y= x+b;
          printf("O JOGO DUROU %d HORA(S)\n",y);
     }
     else if(a<b)
     {
          x= a-b;
          y=abs(x);
          printf("O JOGO DUROU %d HORA(S)",y);
     }
     else
     {
          printf("O JOGO DUROU 24 HORA(S)");
     }


     return 0;
}
