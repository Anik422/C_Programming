#include<stdio.h>
int main()
{
     int n,x,y,i,coun=0,sum=0;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          scanf("%d%d",&x,&y);
         while(1)
          {
               if(coun==y)
               {
                    printf("%d\n",sum);
                    sum=0;
                    coun=0;
                    break;
               }
               else if(x%2==0)
               {

                    x++;

               }
               else
               {
                    sum=sum+x;
                    x++;
                    coun++;
               }
          }


     }


     return 0;
}
