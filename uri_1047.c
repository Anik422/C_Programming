#include<stdio.h>
int main()
{
     int h1,h2,m1,m2,hours=0,minute=0,i,j;
     scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
     for(i=h1; i<h2; i++)
     {
         hours++;
     }
     for(j=m1; j<m2; j++)
     {
          minute++;
     }
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",hours,minute);


     return 0;
}
