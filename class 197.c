#include<stdio.h>
int main()
{
     char str[50],ch;
     int i,capital,small,digit;
     printf("Enter a string :");
     gets(str);
     i=capital=small=digit=0;
     while(str[i]!='\0')
     {
          if(str[i]>=65 && str[i]<=90)
          {
               capital++;
          }
          else if(str[i]>=97 && str[i]<=122)
          {
               small++;
          }
          else if(str[i]>=48 && str[i]<=57)
          {
               digit++;
          }




          i++;
     }
     printf("Number Of capital = %d\n",capital);
     printf("Number Of small = %d\n",small);
     printf("Number Of digit = %d\n",digit);




     return 0;
}
