#include<stdio.h>
int main()
{
     int n,m,i,j,k,l;
     double arry[12][12],sum=0.0;
     char ch[2];
     scanf("%s",&ch);
     for(i=0; i<12; i++)
     {
          for(j=0; j<12; j++)
          {
               scanf("%lf",&arry[i][j]);
          }
     }
     n=1;
     m=11;
     for(k=0; k<5; k++)
     {
          for(l=n; l<m; l++)
          {
               sum+=arry[k][l];
          }

          n++;
          m--;
     }

     if(ch[0]=='S')
     {
          printf("%.1lf\n",sum);
     }
     else if(ch[0]=='M')
     {
          printf("%.1lf\n",sum/30.0);
     }



     return 0;
}
