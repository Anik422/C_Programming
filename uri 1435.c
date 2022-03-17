#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p,hn;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        int arry[n][n];
        hn=n/2;
        if(n%2==1)
        {
            hn++;
        }
        o=0;
        p=n-1;
        for(m=1; m<=hn; m++)
        {
            for(i=o; i<=p; i++)
            {
                for(j=o; j<=p; j++)
                {
                    arry[i][j]=m;
                }
            }
            o++;p--;
        }

        for(k=0; k<n; k++)
        {
            for(l=0; l<n; l++)
            {
                if(l==0)
                {
                    printf("%3d",arry[k][l]);
                }
                else
                {
                   printf(" %3d",arry[k][l]);
                }
            }
            printf("\n");
        }
    }


    return 0;
}
