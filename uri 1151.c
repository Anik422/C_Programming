#include<stdio.h>
int main()
{
    int n,i,y=0,temp,x=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i==n-1)
        {
            printf("%d",y);
            temp = y + x;
            y=x;
            x=temp;
        }
        else
        {
            printf("%d ",y);
            temp = y + x;
            y=x;
            x=temp;
        }



    }


    return 0;
}
