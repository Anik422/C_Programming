#include<stdio.h>
int main()
{
     int n, row, col;
     printf("Enter any number :");
     scanf("%d",&n);
     for(row=1; row<=n;row++)
     {
          for(col=1; col<=n; col++)
          {
               if(col==n ||col==1 || row==n|| row==1)
               {
                    printf("* ");
               }

               else
               {
                    printf("  ");
               }

          }
          printf("\n");
     }
     for(row=1;row<=n;row++)
     {
          for(col=1;col<=n; col++)
          {
               if(row==1||col==1||row==n||col==n)
               {
                    printf("# ");
               }
               else
               {
                    printf("  ");
               }

          }
          printf("\n");
     }

     getch ();
}
