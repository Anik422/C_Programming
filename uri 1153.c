#include<stdio.h>
int main()
{
     int n,i,sub=1;
     scanf("%d",&n);
     int num[n];
     for(i=0; i<=n; i++)
     {
          if(i==n)
          {
               break;
          }
          num[i]=(n-i);
     }

     for(i=0; i<n; i++)
     {
          sub=sub*num[i];
     }
     printf("%d\n",sub);
     return 0;
}
