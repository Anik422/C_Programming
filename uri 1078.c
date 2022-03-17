#include<stdio.h>
int main()
{
     int n,result,i;
     scanf("%d",&n);
     for(i=1; i<=10; i++)
     {
          result=i*n;
          printf("%d x %d = %d\n",i,n,result);
     }



     return 0;
}
