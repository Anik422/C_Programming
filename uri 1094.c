#include<stdio.h>
int main()
{
     int num,n,i,sum_c=0,sum_r=0,sum_s=0,SumOfAll=0;
     char ch[2],r[2],p[2],q[2];
     float par_c,par_r,par_s;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
          scanf("%d%s",&num,&ch);
          if(ch[0]=='C')
          {
             sum_c=sum_c + num;
          }
          else if(ch[0]=='R')
          {
             sum_r=sum_r + num;
          }
          else if(ch[0]=='S')
          {
               sum_s=sum_s + num;
          }

     }
     SumOfAll=sum_c+sum_r+sum_s;
     par_c= (sum_c * 100.0)/(SumOfAll*1.0);
     par_r= (sum_r * 100.0)/(SumOfAll*1.0);
     par_s= (sum_s * 100.0)/(SumOfAll*1.0);
     printf("Total: %d cobaias\n",SumOfAll);
     printf("Total de coelhos: %d\n",sum_c);
     printf("Total de ratos: %d\n",sum_r);
     printf("Total de sapos: %d\n",sum_s);
     printf("Percentual de coelhos: %.2f %%\n",par_c);
     printf("Percentual de ratos: %.2f %%\n",par_r);
     printf("Percentual de sapos: %.2f %%\n",par_s);

}
