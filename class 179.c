#include<stdio.h>
int main()
{
     int a[10][10],sum=0,col,row,i,j;
     printf("Enter rows and column for matrix :");
     scanf("%d%d",&row,&col);
     for(i=0; i<row; i++)
     {
          for(j=0; j<col; j++)
          {
               printf("A[%d][%d] =",i,j);
               scanf("%d",&a[i][j]);
          }
          printf("\n");
     }


     printf("A = ");

     for(i=0; i<row; i++)
     {
          printf("\t");
          for(j=0; j<col; j++)
          {
               printf("%d ",a[i][j]);

          }
          printf("\n");
     }
     printf("Diagonal Elements =");
     for(i=0; i<row; i++)
     {
          for(j=0; j<col; j++)
          {
              if(i==j)
              {
                   printf("%d ",a[i][j]);
                   sum=sum+a[i][j];
              }
          }

     }
     printf("\nThe Sum of Diagonal Elements: %d\n\n",sum);

     return 0;
}
