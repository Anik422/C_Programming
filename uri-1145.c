#include<stdio.h>
int main()
{
     int n,m,i,j;
     scanf("%d",&n);
     scanf("%d",&m);
     j=n+0;

     for(i=1; i<=m; i++)
     {
        if(i==j)
          {
               printf("%d\n",i);
               j=j+n;
          }
         else
          {
               printf("%d ",i);
          }

     }



     return 0;
}
