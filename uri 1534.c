#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d",&n)!= EOF)
    {
        int i,j,k,l;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
               if(j==n-1-i)
               {
                   printf("2");

               }
               else if(i==j)
               {
                    printf("1");
               }
               else
               {
                    printf("3");
               }

            }
            printf("\n");
        }

    }


    return 0;
}
