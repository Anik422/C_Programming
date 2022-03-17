#include<stdio.h>
int main()
{
     char s[20];
     int n,m,i;
     scanf("%d",& n);
     for(i=1; i<=n; i++)
     {
          scanf("%s%d",&s,&m);
          if(s[0]=='T' && s[1]=='h' && s[2]=='o' && s[3]=='r')
          {
              printf("Y\n");
          }
          else
          {
               printf("N\n");
          }
     }
     return 0;
}
