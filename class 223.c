#include<stdio.h>
int main()
{
     int x=10;
     int y;
     int *p;
     p=&x;
     printf("Value of x =%d\n",x);
     printf("Address of x =%u\n",&x);
     printf("Address of p =%d\n",p);
     printf("Content of p =%d\n",*p);
     printf("Address of p variable =%u\n",&p);
     printf("Address of y =%u\n",&y);



     return 0;
}
