#include<stdio.h>
int main()
{
     int i, num[]={10,12,45,15,30,28},value,pos=-1;
     printf("Enter any Number :");
     scanf("%d",&value);
     for(i=0; i<6; i++)
     {
          if(value==num[i])
          {
               pos=i+1;
               break;
          }
     }
     if(pos==-1)
     {
          printf("Not found!");
     }
     else
     {
          printf("The Position of %d is : %d\n",value,pos);
     }


     return 0;
}
