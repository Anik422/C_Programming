#include<stdio.h>
int main()
{
     int N,A,i,x=0;
     scanf("%d%d",&A,&N);
     while(N<=0)
     {
          scanf("%d",&N);
     }
     for(i=1; i<=N; i++)
     {
          x+=A;
          A++;


     }
     printf("%d\n",x);


     return 0;
}
