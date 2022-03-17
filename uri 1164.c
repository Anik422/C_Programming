#include<stdio.h>
int main()
{
     int n,num,c,sum=0,j;
     scanf("%d",&n);
     for(int i=1; i<=n; i++)
     {
          scanf("%d",&num);
          c=num/2; sum=0;
          for(j=1; j<=c; j++)
          {
               if(num%j==0)
               {
                    sum+=j;
               }
          }
          if(num==sum)
          {
               printf("%d eh perfeito\n",num);
          }
          else
          {
               printf("%d nao eh perfeito\n",num);
          }
     }


     return 0;
}
