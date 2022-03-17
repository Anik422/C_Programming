#include<stdio.h>
int main()
{
    int n,i,num[100],j,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
         scanf("%d",&num[i]);
    }
    for(j=0; j<n; j++)
    {
         sum=sum+num[j];
    }
     printf("%d",sum);

     return 0;
}
