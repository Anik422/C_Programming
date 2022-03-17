#include<stdio.h>
int main()
{
     int n,num[10000],i,j,in=0,out=0;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
          scanf("%d",&num[i]);
          //for(j=0; j<n; j++)
     //{
          if(num[i]>=10&& num[i]<=20)
          {
               in=in+1;
          }
          else
          {
               out=out+1;
          }
     //}
     }

     printf("%d in\n",in);
     printf("%d out\n",out);

     return 0;
}
