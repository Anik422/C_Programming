#include<stdio.h>
int main()
{
     int i,j=1;
     double sum=0;
     for(i=1; i<=39; i+=2)
     {
          sum= sum+((double)i/j);
          j++;
     }
     printf("%.2lf\n",sum);
     printf("%d",j);

     return 0;
}
