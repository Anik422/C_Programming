#include<stdio.h>
int main()
{
     int n,i,j,k;
     char ch[2];
     double arry[12][12],sum=0.0;
     scanf("%s",&ch);
     for(i=0; i<12; i++)
     {
          for(j=0; j<12; j++)
          {
               scanf("%lf",&arry[i][j]);
          }
     }
     k=1;
     for(i=1; i<12; i++)
     {
          for(n=k; n<12; n++)
          {
               sum+=arry[i][n];
          }
          k++;
     }
     if(ch[0]=='S')
     {
          printf("%.1lf\n",sum);
     }
     else if(ch[0]=='M')
     {
          printf("%.1lf\n",sum/12.0);
     }
     return 0;
}
