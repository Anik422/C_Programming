#include<stdio.h>
int main()
{
     int n,i,j;
     double arry[12][12],sum=0.0;
     char ch[2];
     scanf("%d %s",&n,&ch);
     for(i=0; i<12; i++)
     {
          for(j=0; j<12; j++)
          {
               scanf("%lf",&arry[i][j]);
          }
     }
     for(i=0; i<12; i++)
     {
          sum+=arry[i][n];
     }
     if(ch[0]=='S')printf("%.1lf\n",sum);
     if(ch[0]=='M')printf("%.1lf\n",sum/12.0);




     return 0;
}
