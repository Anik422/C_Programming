#include<stdio.h>
int main()
{
     int s,t,f,sum;
     scanf("%d%d%d",&s,&t,&f);
     sum=s+t+f;
     if(sum<=24 && sum>-1)
     {
          printf("%d\n",sum);
     }
     else if(sum>24)
     {
          sum=sum-24;
          printf("%d\n",sum);
     }
     else if(sum<0)
     {
          sum=sum+24;
          printf("%d\n",sum);
     }


     return 0;
}
