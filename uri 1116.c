#include<stdio.h>
int main()
{
     int n,x,y,i;
     float result;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          scanf("%d%d",&x,&y);
          if(y==0)
          {
               printf("divisao impossivel\n");
          }
          else
          {
               result= (float) x/y;
               printf("%.1f\n",result);
          }
     }


     return 0;
}
