#include<stdio.h>
int main()
{
     int n,i,j,k;
     double arry[12][12],sum=0.0;
     char ch[2];
     scanf("%s",&ch);
     for(j=0; j<12; j++)
     {
          for(k=0; k<12; k++)
          {
               scanf("%lf",&arry[j][k]);
          }
     }
     n=11;
     for(i=0; i<12; i++)
     {
          for(j=0; j<n; j++)
          {
              sum+=arry[i][j];
          }

          n--;
     }
     if(ch[0]=='S')
     {
          printf("%.1lf\n",sum);
     }
     else if(ch[0]=='M')
     {
          printf("%.1lf\n",sum/66.0);
     }

     return 0;
}
