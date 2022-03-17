#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int lin,i,n,j;
    scanf("%[^\n]s",&ch);
    lin=strlen(ch);
    for(i=48; i<58; i++)
    {n=0;
    for(j=0; j<lin; j++)
    {
         if(ch[j]==i)
         {
              n++;
         }
    }
    printf("%d ",n);



    }




    return 0;
}
