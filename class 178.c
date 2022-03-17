#include<stdio.h>
int main()
{
     int a[10][10],transpose[10][10],i,j,row,col;
     printf("Enter rows and column for matrix A = ");
     scanf("%d%d",&row,&col);
     printf("Enter the value for matrix A. \n");
     //scanning Matrix A
     for(i=0; i<row; i++)
     {
          for(j=0; j<col; j++)
          {
               printf("A[%d][%d] =",i,j);
               scanf("%d",&a[i][j]);
          }
          printf("\n");
     }
     //Transposed A Matrix
     for(i=0; i<row; i++)
     {
          for(j=0; j<col; j++)
          {
               transpose[j][i]=a[i][j];
          }
     }
     //printing matrix A
     printf("The A Matrix.\n");
     for(i=0; i<row; i++)
     { printf("\t");
          for(j=0; j<col; j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     //printing  transpose matrix
     printf("The Transposed Matrix.\n");
     for(i=0; i<col; i++)
     { printf("\t");
          for(j=0; j<row; j++)
          {
               printf("%d ",transpose[i][j]);
          }
          printf("\n");
     }

     return 0;
}
