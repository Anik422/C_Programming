#include<stdio.h>

int main()
{
     int num,sum=0,rem=0;
       float average;

     while(1)
     {
          scanf("%d",&num);
          if(num<0)
          {
               break;
          }
          else
          {
          sum+=num;
          rem++;

          }


     }
          average=(float)sum/rem;
      printf("%.2lf\n",average);


     return 0;
}
