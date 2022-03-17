#include<stdio.h>
int main()
{
     int n,j,i,num, coun=0;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          coun=0;
          scanf("%d",&num);
          for(j=2; j<=num; j++)
          {
               if(num%j==0)
               {
                    coun++;
               }
          }
          if(coun==1)
          {
               printf("%d eh primo\n",num);
          }
          else
          {
               printf("%d nao eh primo\n",num);
          }
     }


     return 0;
}
