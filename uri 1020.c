#include<stdio.h>
int main()
{
     int N,Y,M,D,y,m,d,x;
     scanf("%d",&N);

     y=N/365;
     x=N%365;
     m=N/30;
     d=N%30;
     if(y>=1)
     {
         Y=N/365;
         M=x/30;
         D=x%30;
          printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);
     }

    else
     {
           printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
     }

     return 0;
}
