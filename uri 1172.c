#include<stdio.h>
int main()
{
     int num[10],i,j;
     for(i=0; i<10; i++)
     {
          scanf("%d",&num[i]);
     }
     for(j=0; j<10; j++)
     {
          if(num[j]<=0)
          {
               printf("X[%d] = 1\n",j);
          }
          else
          {
               printf("X[%d] = %d\n",j,num[j]);
          }
     }


     return 0;
}
