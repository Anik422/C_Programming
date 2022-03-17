#include<stdio.h>
int main()
{
     int i,j,a[10][10],b[10][10],c[10][10],NumberOfRows,NumberOfCols;

     printf("Enter the number of rows and cols :");
     scanf("%d%d",&NumberOfRows,&NumberOfCols);
     //scanning A matrix
     printf("Enter elements for B matrix.\n");
     for(i=0; i<NumberOfRows; i++)
     {
          for(j=0; j<NumberOfCols; j++)
          {
          printf("A[%d][%d] = ",i,j);
          scanf("%d",&a[i][j]);
          }
          printf("\n");
     }
     //scanning B matrix
     printf("\n\nEnter elements for B matrix.\n");
     for(i=0; i<NumberOfRows; i++)
     {
          for(j=0; j<NumberOfCols; j++)
          {
               printf("B[%d][%d] = ",i,j);
               scanf("%d",&b[i][j]);
          }
          printf("\n");
     }
     //print A matrix
     printf("A= ");
     for(i=0; i<NumberOfRows; i++)
     {
          printf("\t");
          for(j=0; j<NumberOfCols; j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }

     //print B matrix
     printf("\n\nB= ");
     for(i=0; i<NumberOfRows; i++)
     {
          printf("\t");
          for(j=0; j<NumberOfCols; j++)
          {
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     //adding the matrix

     for(i=0; i<NumberOfRows; i++)
     {
          for(j=0; j<NumberOfCols; j++)
          {
               c[i][j] = a[i][j] + b[i][j];
          }
     }
     //print C matrix
     printf("\n\nA +B = ");
     for(i=0; i<NumberOfRows; i++)
     {
          printf("\t");
          for(j=0; j<NumberOfCols; j++)
          {
               printf("%d ",c[i][j]);
          }
          printf("\n");
     }


     return 0;
}
