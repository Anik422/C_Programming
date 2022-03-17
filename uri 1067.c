/*#include<stdio.h>
int main()
{
    int n,i,m,a;
    scanf("%d",&n);
    m=n+12;
    a=n+1;
    if(n/2!=0)
    { for(i=a; i<=m; i=i+2)
            {
                printf("%d\n",i);
            }

    }
        else
        {
             for(i=n; i<=m; i=i+2)
        {
            printf("%d\n",i);
        }
    }



        return 0;
    }*/
#include <stdio.h>

int main()
{
    int n, i=0;
    scanf("%d", &n);
    while(i < 6){
        if(n%2!=0){
            printf("%d\n", n);
            i++;
        }
        n++;
     }
    return 0;
}
