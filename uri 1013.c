#include<stdio.h>
int main()
{
    int a,b,c,y,n,z,l,x,m;


    scanf("%d%d%d",&a,&b,&c);
    y = a + b;
    x = abs(a-b);
    n = (y+x)/2;

    z = n + c;
    m = abs(n - c);
    l = (z+m)/2;
    printf("%d eh o maior\n",l);

    return 0;
}
