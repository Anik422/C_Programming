#include<stdio.h>
int main()
{
     int n,coun=0;
     printf("Enter any number :");
     scanf("%d",&n);

     while(n!=0)
     {
          n=n/10;
          ++coun;
     }
     printf("Total number of digits : %d\n",coun);

     return 0;
}
