#include<stdio.h>
int main()
{
    int n,i,a,b;
    float sum=0.00,mul;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        if(a==1001)
        {
            mul=b*1.50;
            sum=sum+mul;

        }
        else if(a==1002)
        {
            mul=b*2.50;
            sum=sum+mul;

        }
        else if(a==1003)
        {
            mul=b*3.50;
            sum=sum+mul;

        }
        else if(a==1004)
        {
            mul=b*4.50;
            sum=sum+mul;

        }
        else if(a==1005)
        {
            mul=b*5.50;
            sum=sum+mul;

        }
    }
    printf("%.2f\n",sum);

    return 0;
}
