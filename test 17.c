#include<stdio.h>
int main()
{
     char c[1000];
     int lin,i;
     scanf("%[^\n]s",&c);
     lin=strlen(c);
     for(i=0; i<=lin; i++)
     {
          if(c[i]==' ')
          {
               printf("\n");
          }
          else if(c[i]==NULL)
          {
               printf("\n");
          }
          else
          {
               printf("%c",c[i]);
          }


     }


     return 0;
}
