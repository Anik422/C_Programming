/*
1
1 2
1 2 3
1 2
1
*/
#include<stdio.h>
int main()
{
     int n, row, col;
     printf("Enter Any Number :");
     scanf("%d",&n);

     for(row=1; row<n; row++)
     {
          for (col=1; col<=row; col++)
          {
               printf("%d ",col);
          }
          printf("\n");
     }
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%d ",col);
          }
          printf("\n");
     }

for(row=1; row<n; row++)
     {
          for (col=1; col<=row; col++)
          {
               printf("%d ",row);
          }
          printf("\n");
     }
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%d ",row);
          }
          printf("\n");
     }
for(row=1; row<n; row++)
     {
          for (col=1; col<=row; col++)
          {
               printf("%c ",row+64);
          }
          printf("\n");
     }
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%c ",row+64);
          }
          printf("\n");
     }
for(row=1; row<n; row++)
     {
          for (col=1; col<=row; col++)
          {
               printf("%c ",col+64);
          }
          printf("\n");
     }
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%c ",col+64);
          }
          printf("\n");
     }

for(row=1; row<n; row++)
     {
          for (col=1; col<=row; col++)
          {
               printf("# ");
          }
          printf("\n");
     }
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("# ");
          }
          printf("\n");
     }


     return 0;
}
