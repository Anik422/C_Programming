#include<stdio.h>
int main()
{
     int n;
     while(scanf("%d",&n))
     {
          if(n==0)
          {
               break;
          }
          else
          {
               int i,j,k,l;
               k = 1;
               for(i=0; i<n; i++)
               {
                    for(j=0; j<n; j++)
                    {
                         if (j < n)
                         {
                              printf(" ");
                         }
                         if(j==1)
                         {
                              l=k;
                         }
                         if(1)
                         {
                              printf("%d",k);
                              k+=k;
                         }
                    }
                    printf("\n");
                    k=l;
               }
               printf("\n");
          }
     }

     return 0;
}
