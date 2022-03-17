#include<stdio.h>
int main()
{
     int initialNum,finalNum,temp,r,sum=0,i;
     printf("Initial value =");
     scanf("%d",&initialNum);

     printf("Final value =");
     scanf("%d",&finalNum);

     for(i=initialNum; i<=finalNum; i++)
     {
          temp=i;
          while(temp!=0)
     {
          r=temp%10;
          sum=sum+r*r*r;
          temp=temp/10;

     }
     if(sum==i)
     {
          printf("%d\n",i);
     }
          sum=0;
     }


     return 0;
}
