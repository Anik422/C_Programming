#include<stdio.h>
#include<string.h>
int main()
{
     char num[5];
     int length;
     length = strlen(gets(num));
     if(length==3)
     {
          if(num[0]=='1')printf("C");
          else if(num[0]=='2')printf("CC");
          else if(num[0]=='3')printf("CCC");
          else if(num[0]=='4')printf("CD");
          else if(num[0]=='5')printf("D");
          else if(num[0]=='6')printf("DC");
          else if(num[0]=='7')printf("DCC");
          else if(num[0]=='8')printf("DCC");
          else if(num[0]=='9')printf("CM");
          if(num[1]=='1')printf("X");
          else if(num[1]=='2')printf("XX");
          else if(num[1]=='3')printf("XXX");
          else if(num[1]=='4')printf("XL");
          else if(num[1]=='5')printf("L");
          else if(num[1]=='6')printf("LX");
          else if(num[1]=='7')printf("LXX");
          else if(num[1]=='8')printf("LXXX");
          else if(num[1]=='9')printf("XC");
          if(num[2]=='1')printf("I");
          else if(num[2]=='2')printf("II");
          else if(num[2]=='3')printf("III");
          else if(num[2]=='4')printf("IX");
          else if(num[2]=='5')printf("X");
          else if(num[2]=='6')printf("XI");
          else if(num[2]=='7')printf("XII");
          else if(num[2]=='8')printf("XIII");
          else if(num[2]=='9')printf("IX");
     }
     else if(length==2)
     {
         if(num[0]=='1')printf("X");
          else if(num[0]=='2')printf("XX");
          else if(num[0]=='3')printf("XXX");
          else if(num[0]=='4')printf("XL");
          else if(num[0]=='5')printf("L");
          else if(num[0]=='6')printf("LX");
          else if(num[0]=='7')printf("LXX");
          else if(num[0]=='8')printf("LXXX");
          else if(num[0]=='9')printf("XC");
          if(num[1]=='1')printf("I");
          else if(num[1]=='2')printf("II");
          else if(num[1]=='3')printf("III");
          else if(num[1]=='4')printf("IX");
          else if(num[1]=='5')printf("X");
          else if(num[1]=='6')printf("XI");
          else if(num[1]=='7')printf("XII");
          else if(num[1]=='8')printf("XIII");
          else if(num[1]=='9')printf("IX");
     }
     else if(length==1)
     {
          if(num[0]=='1')printf("I");
          else if(num[0]=='2')printf("II");
          else if(num[0]=='3')printf("III");
          else if(num[0]=='4')printf("IX");
          else if(num[0]=='5')printf("X");
          else if(num[0]=='6')printf("XI");
          else if(num[0]=='7')printf("XII");
          else if(num[0]=='8')printf("XIII");
          else if(num[0]=='9')printf("IX");
     }
     printf("\n");

     return 0;
}
