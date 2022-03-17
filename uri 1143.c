#include<stdio.h>
int main()
{
   int n,i,m;
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
        m=i*i;
        printf("%d %d %d\n",i,m,m*i);
        printf("%d %d %d\n",i,m+1,m*i+1);
   }


     return 0;
}
