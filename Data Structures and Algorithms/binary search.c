#include<stdio.h>


int main()
{
     int len,num[100],a,i,n,mid,left,right;
     printf("Enter number of elements =");
     scanf("%d",&len);
     for(int i=0; i<len; i++)
     {
          scanf("%d",&num[i]);
     }
     printf("Enter value to find =");
     scanf("%d",&a);

     //search array index number
    left=0;
    right= len-1;
    mid=(left+right)/2;
    while(left<=right)
    {

          if(num[mid]<a)
         {
              printf("Work1");
              left=mid+1;
         }
        else if(num[mid]==a)
         {
              //printf("Work");
              printf("%d",mid);
              break;
         }
         else
         {
              printf("Work2");
              right=mid-1;
         }
        mid=(left+right)/2;
    }
    if(left>right)
    {
         printf("Not found! %d isn't present in the list.\n", a);
    }

     return 0;
}
