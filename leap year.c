#include<stdio.h>
int main()
{
     int y;
     printf("Enter the year:");
     scanf("%d",&y);
     if(y%400==0)
          printf("The year is Leap year %d .\n",y);
     else if(y%4==0 && y%100!=0)
          printf("The Year is Leap year %d .\n",y);
     else
          printf("The year is not Leap year %d .\n",y);

     return 0;
}
