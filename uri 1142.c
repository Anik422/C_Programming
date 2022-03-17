#include<stdio.h>
int main()
{
     int n,i,m=0;
     scanf("%d",&n);

     for(i=0; i<n; i++)
     {

          printf("%d %d %d PUM\n",m+1,m+2,m+3);
          m=m+4;
     }


     return 0;
}
