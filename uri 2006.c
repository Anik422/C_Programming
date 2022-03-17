#include<stdio.h>
int main()
{
     int n,num[5],i,j,count=0;
     scanf("%d",&n);
     for(i=0; i<5; i++)
     {
          scanf("%d",&num[i]);
     }
     for(j=0; j<5; j++)
     {
          if(num[j]==n)
          {
               count++;
          }
     }
     printf("%d\n",count);

     return 0;
}
