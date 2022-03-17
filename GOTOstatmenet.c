#include<stdio.h>
int main()
{
     int i=1;
     print:
          printf("%d\t",i);
          i++;
          if(i<5854255455555655)
               goto print; //label is calling hear


     return 0;
}
