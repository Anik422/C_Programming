#include<stdio.h>
int main()
{
     char s1[]="Suparna Bhattacharjee";
     int len = strlen(s1);
     int i=0,n=0;
     printf("Length = %d\n",len);
     while(s1[i]!='\0')
     {
          i++;
          n++;
     }
     printf("Length = %d\n",n);

     return 0;
}
