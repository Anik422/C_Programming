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
        n=5;
    for(k=7; k<12; k++)
    {
        for(l=n; l<k; l++)
        {
            sum+=arry[k][l];
        }

        n--;
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
