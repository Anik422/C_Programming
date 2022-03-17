#include<stdio.h>
int main()
{
     int n,m=1,i;
     printf("Enter any number =");
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          m=m*i;
          if(i==1)
          {
               printf("1 * ");
          }
          else if(i==n)
          {
               printf("%d ",i);
          }
          else
          {
               printf("%d * ",i);
          }
     }
     printf("= %d",m);
     getch ();
}
