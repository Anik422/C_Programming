#include<stdio.h>
#include <string.h>
int main()
{
    char a[201],b[10],c[201],d[10];
    long long int e,f,j;
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s%s%s%s",a,b,c,d);
        scanf("%lld%lld",&e,&f);
        j=e+f;
        if(b[0]== 'P')
        {
            if(j%2==0)
            {
                printf("%s\n",a);
            }
            else
            {
                printf("%s",c);
            }
        }
        else
        {
            if(j%2==0)
            {
                printf("%s\n",c);
            }
            else
            {
                printf("%s",a);
            }
        }

    }


    return 0;
}
