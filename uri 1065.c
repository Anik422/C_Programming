#include<stdio.h>
int main()
{
     int num,i,tep=0;
     for(i=1; i<=5; i++)
     {
          scanf("%d",&num);
          if(num%2==0)
          {
               tep++;
          }
     }
     printf("%d valores pares\n",tep);

     return 0;
}
