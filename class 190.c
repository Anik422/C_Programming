#include<stdio.h>
int main()
{
     char str1[]= "Anik Saha";
     char str2[]= "Anik Saha";
     int d=strcmp(str1,str2);

     if(d==0)
     {
          printf("String are equal.");
     }
     else
     {
          printf("String are not equal.");
     }

     return 0;
}
