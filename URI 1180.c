#include<stdio.h>
int main()
{
     int n,i,k;
     scanf("%d",&n);
     int arry[n];
     for(i=0; i<n; i++)
     {
          scanf("%d",&arry[i]);
     }

     int min = arry[0],m;
     for(k=1; k<n; k++)
     {
          if(min>arry[k])
          {
               min=arry[k];
               m=k;
          }
     }
     printf("Menor valor: %d\nPosicao: %d\n",min,m);

     return 0;
}
