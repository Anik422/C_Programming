#include<stdio.h>
int main()
{
    int N,h,s,m,H,M,S;
    scanf("%d",&N);
    m = N/60;
    h = m/60;
    s =N%60;
    if(m>60)
    {
        H=m/60;
        M=m%60;
        S=N%60;
        printf("%d:%d:%d\n",H,M,S);

    }
    else
    {
        printf("%d:%d:%d\n",h,m,s);
    }


    return 0;
}
