#include<stdio.h>
enum days_of_week{
     sun,mon,tue,wed,thu,fri,sat

};
int main()
{
     enum days_of_week day1,day2;

     day1=tue;
     printf("Day1 = %d\n",day1);
     day2=wed;
     printf("Day2 = %d\n",day2);
     int dif= day2-day1;


     printf("Day difference = %d\n",dif);


     return 0;
}
