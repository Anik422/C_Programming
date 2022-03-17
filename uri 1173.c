#include<stdio.h>
int main()
{
     int v,i,j,num[10];
     scanf("%d",&v);
     int x=v;
     for(i=0; i<10; i++)
     {
          if(i==0)
          {
               printf("N[%d] = %d\n",i,x);
               x+=x;
          }
          else
          {
                printf("N[%d] = %d\n",i,x);
                x+=x;
          }
     }


     return 0;
}
