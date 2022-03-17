#include<stdio.h>
#include<math.h>
int main()
{
     int n,k;
     scanf("%d%d",&n,&k);
     int res=1;
     int m = pow(10,9)+9;
     for(int i=0; i<n; i++)
     {
          res=(res*k)%m;
     }
     int result = res%m;
     printf("%d",result);
     return 0;
}
