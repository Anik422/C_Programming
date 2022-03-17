#include<stdio.h>
int main()
{
     int a[10][10],b[10][10],c[10][10],n,m,i,j;
     printf("Enter any number :");
     scanf("%d%d",&n,&m);
     //scanning A matrix
     for(i=0; i<n; i++)
     {
          for(j=0; j<m; j++)
          {
               printf("A[%d][%d]= ",i,j);
               scanf("%d",&a[i][j]);
          }
          printf("\n");
     }
     //scanning B matrix
     for(i=0; i<n; i++)
     {
          for(j=0; j<n; j++)
          {
               printf("B[%d][%d]= ",i,j);
               scanf("%d",&b[i][j]);
          }
          printf("\n");
     }
     //printing A matrix
      printf("\n\n");
     printf("A = ");

     for(i=0; i<n; i++)
     {
          printf("\t");
          for(j=0; j<m; j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }

     //printing B matrix
      printf("\n\n");
     printf("B =");
     for(i=0; i<n; i++)
     {
          printf("\t");
          for(j=0; j<n; j++)
          {
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     //Matrix A & Matrix B SUM
     for(i=0; i<n; i++)
     {
          for(j=0; j<m; j++)
          {
               c[i][j] = a[i][j] + b[i][j];
          }
     }
     printf("\n\n");
     //Printing A+B Matrix
     printf("A+B = ");
     for(i=0; i<n; i++)
     {
          printf("\t");
          for(j=0; j<m; j++)
          {
               printf("%d ",c[i][j]);
          }
          printf("\n");
     }
     return 0;
}
