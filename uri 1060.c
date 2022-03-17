#include<stdio.h>
int main()
{
     double num;
     int tmp=0,i;
          for(i=0; i<6; ++i)
          {
               scanf("%lf",&num);
               if(num>0)
               {
                    tmp++;
               }
          }
          printf("%d valores positivos\n",tmp);
     return 0;
}
