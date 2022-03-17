#include<stdio.h>
int main()
{
     int n,m,i;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          scanf("%d",&m);
          if(m%2==0)
          {
               printf("%d\n",m%2);
          }
          else if(m%2!=0)
          {
               printf("%d\n",m%2);
          }
     }



     return 0;
}
