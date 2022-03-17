#include<stdio.h>
void display(int x[])
{
     int i;
     for(i=0; i<6; i++)
          {
               printf("%d ",x[i]);
          }

}
int main()
{
     int num[]={10,30,50,40,60,84};
     display(num);

}
