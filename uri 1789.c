#include<stdio.h>
int main()
{
     int n,i,a=0,b=0,c=0;
     while(scanf("%d",&n)!=EOF)
     {
          int arry,max=0;
          for(i=0; i<n; i++)
          {
               scanf("%d",&arry);
               if(arry>max)
               {
                    max=arry;
               }

          }


               if(max>=20)
               {
                   printf("3\n");
               }
               else if(arry<10)
               {
                    printf("1\n");
               }
               else
               {
                    printf("2\n");
               }


     }


     return 0;
}
