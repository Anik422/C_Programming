#include<stdio.h>
int main()
{
     int i,j,k,n,e=1;
     scanf("%d",&n);
     int array[n];
     for(i=0; i<n; i++)
     {
          scanf("%d",&array[i]);
     }
     j=array[0];
     for(k=0; k<n; k++)
     {
          if(array[k]<j)
          {
               j=array[k];
               e=k+1;
          }
     }
     printf("%d\n",e);
     return 0;
}
