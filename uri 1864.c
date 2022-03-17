#include<stdio.h>
int main()
{
     char s[]="LIFE IS NOT A PROBLEM TO BE SOVED";
     int n,i;
     scanf("%d",&n);
     for(i=0; i<=n; i++)
     {
         if(i==n)
         {
              printf("\n");
         }
         else
         {
               printf("%c",s[i]);
         }
     }


     return 0;
}
