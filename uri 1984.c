#include<stdio.h>
#include<string.h>
int main()
{
    char num[25],temp;
    int len,i,j;

    scanf("%s",&num);
    len = strlen(num);
    for(i=0,j=len-1; i<len/2; i++,j--)
    {
          temp=num[i];
          num[i]=num[j];
          num[j]=temp;

    }

    printf("%s\n",num);




    return 0;
}
