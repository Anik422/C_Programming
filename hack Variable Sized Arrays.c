#include<stdio.h>
int main()
{
     int array[100][100];
     int i,j,k,n,q,s,a,b;
     scanf("%d%d",&n,&q);
     for(i=0; i<n; i++)
     {
          scanf("%d",&s);
          for(j=0; j<s; j++)
          {
               scanf("%d",&array[i][j]);
          }
     }
     for(k=1; k<=q; k++)
     {
          scanf("%d%d",&a,&b);
          printf("%d\n",array[a][b]);
     }


     return 0;
}
