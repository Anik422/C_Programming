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
    m=5;
    for(k=1; k<11; k++)
    {
        if(k<=5)
        {
            for(l=0; l<n; l++)
            {
                sum+=arry[k][l];
            }
            n++;

        }
        else if(k>=6)
        {
            for(l=0; l<m; l++)
            {
                sum+=arry[k][l];
            }
            m--;

        }

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
