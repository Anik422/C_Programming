#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,temp,m,sum=0;
    scanf("%d", &n);
    temp=n;
    for(i=1; i<=5; i++)
    {
         m=temp%10;
         sum=sum+m;
         temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}
