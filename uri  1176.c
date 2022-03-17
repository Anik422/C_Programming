#include<stdio.h>
int main()
{
     long long int fibo[60];
     int n,i,num;
     fibo[0]=0;
     fibo[1]=1;
     for(i=2; i<=60; i++)
     {
         fibo[i]=fibo[i-1]+fibo[i-2];
     }
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          scanf("%d",&num);
          printf("Fib(%d) = %llu\n",num,fibo[num]);
     }



     return 0;


}
