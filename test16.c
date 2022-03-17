#include<stdio.h>
int main()
{
    int n,i,num[100],j,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
         scanf("%d",&num[i]);
    }
    for(j=n; j>0; j--)
    {
        printf("%d ",num[j-1]);
    }


     return 0;
}
