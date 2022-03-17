#include<stdio.h>
int main()
{
    long long int n,sum=0,mud;
    scanf("%llu",&n);
    while(n>0)
    {
        mud=n%10;
        sum+=mud*10;
        n=n/10;
    }
    printf("%llu\n",sum);



    return 0;
}
