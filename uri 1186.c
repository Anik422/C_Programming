#include<stdio.h>
int main()
{
     int n,i,j,k,l;
     double arry[12][12],sum=0.0;
     char ch[2];
     scanf("%s",&ch);
     for(i=0; i<12; i++)
     {
          for(l=0; l<12; l++)
          {
               scanf("%lf",&arry[i][l]);
          }
     }
     n=12;
     for(j=0; j<12; j++)
     {
          for(k=n; k<12; k++)
          {
              sum+=arry[j][k];
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
