#include<stdio.h>
int main()
{
     int n,i;
     float a,b,c,ave;
     scanf("%d",&n);
     for (i=1; i<=n; i++)
     {
          scanf("%f",&a);
          scanf("%f",&b);
          scanf("%f",&c);
           ave = (((a/10)*2)+((b/10)*3)+((c/10)*5));
          printf("%.1f\n",ave);
     }

     return 0;
}
