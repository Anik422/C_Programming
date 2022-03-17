#include<stdio.h>
#include<string.h>
int main()
{
    long long int dec;
    char hex[20];
    scanf("%lld",&dec);
    long long int i=0, j, mud, len, exa;
    while(dec>0)
    {
         mud=dec%16;
         dec/=16;
         if(mud<=9)
         {
              hex[i]= mud+48;
         }
         else if(mud==10)
         {
              hex[i]='A';
         }
         else if(mud==11)
         {
              hex[i]='B';
         }
         else if(mud==12)
         {
              hex[i]='C';
         }
         else if(mud==13)
         {
              hex[i]='D';
         }
         else if(mud==14)
         {
              hex[i]='E';
         }
         else if(mud==15)
         {
              hex[i]='F';
         }
         i++;
    }
    hex[i]='\0';
    len=strlen(hex);
    for(j=len-1; j>=0; j--)
    {
         printf("%c",hex[j]);
    }
    printf("\n");
    return 0;
}
