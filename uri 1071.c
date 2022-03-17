#include<stdio.h>
int main()
{
    int n1,n2,mex,min,i,sum=0;
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
    {
        mex = n2;
        min = n1;
    }
    else
    {
        mex = n1;
        min = n2;
    }
    for(i=min+1; i<mex; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }

    }
    printf("%d\n",sum);

    return 0;
}
