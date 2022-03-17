#include<stdio.h>
int main()
{
    int n,m,sub,i,j,sum;
    for(;;)
    {
        scanf("%d%d",&n,&m);
        if(n==0 && n==0)
        {
            break;
        }
        else
        {
            sub=n-m;
            for(i=100; i>=2; i=i/2)
            {
                 printf("1");
                for(j=100; i>=2; j=j/2)
                {
                    if(i!=j)
                    {
                         sum=i+j;
                         printf("2");
                        if(sum==sub)
                        {
                             printf("3");
                            printf("possible\n");
                        }

                    }
                }
            }
            printf("impossible\n");
        }
    }







    return 0;
}
