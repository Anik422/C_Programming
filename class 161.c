#include<stdio.h>
int main()
{
     int n,row,col,count=0;;
     printf("Enter any Number :");
     scanf("%d",&n);
     for(row=1; row<=n; row++)
     {
          for(col=1; col<=row; col++)
          {
               ++count;
               printf("%d ",count);

          }
          printf("\n");
     }


return 0;
}

