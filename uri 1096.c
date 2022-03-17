#include<stdio.h>
int main()
{
     int i,j;
     for(i=1; i<=9; i=i+2)
     {

          for(j=7; j>=5; j--)
          {
              if(i>0.0 && i <1.0)printf("I=%.1f J=%.1f\n", i, j+i);
           else if(i>1.0 && i<2.0)printf("I=%.1f J=%.1f\n", i, j+i);
    else { k= i;
           l=k + j;
        printf("I=%d J=%d\n", k, l);

          }
     }



     return 0;
}
