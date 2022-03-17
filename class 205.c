#include<stdio.h>
int maximum(int x[])
{
     int i;
     int max=x[0];
     for(i=1; i<12; i++)
     {
          if(max<x[i])
          {
               max=x[i];
          }
     }
     return max;
}
int main()
{
     int num[]={12,5,28,524,14,356,5254,415,36,636,525,363,};
     int maximumValue=maximum(num);
     printf("maximum Value = %d",maximumValue);
     return 0;
}
