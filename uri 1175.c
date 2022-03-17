#include<stdio.h>
int main()
{
     int n[20],i,j;
     for(i=0; i<20; i++)
     {
          scanf("%d",&n[i]);
     }
     for(j=19,i=0; j>-1; j--,i++)
     {
          printf("N[%d] = %d\n",i,n[j]);
     }


     return 0;
}
