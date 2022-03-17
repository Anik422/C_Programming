#include<stdio.h>
int main()
{
    int n,q;
    float x;

    scanf("%d %d",&n,&q);

    if(n==1)
    {
        x=4.00*q;
        printf("Total: R$ %.2f\n",x);
    }
    else if(n==2)
    {
        x=4.50*q;
        printf("Total: R$ %.2f\n",x);
    }
    else if(n==3)
    {
        x=5.00*q;
        printf("Total: R$ %.2f\n",x);
    }
    else if(n==4)
    {
        x=2.00*q;
        printf("Total: R$ %.2f\n",x);
    }
    else if(n==5)
    {
        x=1.50*q;
        printf("Total: R$ %.2f\n",x);
    }

    return 0;
}
