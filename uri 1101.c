#include<stdio.h>
int main()
{
    int n,m,i,sum=0;

    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n<=0 || m<=0)
        {
            break;
        }
        else
        {
            if(n>m)
            {
                for(i=m; i<=n; i++)
                {
                    printf("%d ",i);
                    sum=sum+i;
                }
                printf("Sum=%d\n",sum);
                sum=0;
            }
            else
            {
                for(i=n; i<=m; i++)
                {
                    printf("%d ",i);
                    sum=sum+i;
                }
                printf("Sum=%d\n",sum);
                sum=0;
            }
        }
    }

    return 0;
}
