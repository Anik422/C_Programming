#include<stdio.h>
int main()
{
     int a[10][10],b[10][10],c[10][10],transposed[10][10],i,j,k,r1,c1,r2,c2,sum=0,lowerSum=0,upperSum=0;
     printf("Enter rose and column for A matrix =");
     scanf("%d%d",&r1,&c1);
     printf("Enter rose and column for B matrix =");
     scanf("%d%d",&r2,&c2);
     while(c1!=r2)
     {
          printf("Error!! Matrix A Rows and Matrix B Column not same!\n Place Enter Rows and Column again.\n");
          printf("Enter rose and column for A matrix =");
          scanf("%d%d",&r1,&c1);
          printf("Enter rose and column for B matrix =");
          scanf("%d%d",&r2,&c2);
     }
     //scanning A matrix
     printf("Place Enter value for A matrix:\n");
     for(i=0; i<r1; i++)
     {

          for(j=0; j<c1; j++)
          {
               printf("A[%d][%d] =",i,j);
               scanf("%d",&a[i][j]);
          }
          printf("\n");
     }
     //scanning B matrix
     printf("Place Enter value for B matrix:\n");
     for(i=0; i<r2; i++)
     {
          for(j=0; j<c2; j++)
          {
               printf("B[%d][%d] =",i,j);
               scanf("%d",&b[i][j]);
          }
          printf("\n");
     }
     for(i=0; i<r1; i++)
     {
          for(j=0; j<c2; j++)
          {
               for(k=0; k<c1; k++)
               {
                    sum=sum+a[i][k]*b[k][j];
               }
               c[i][j]=sum;
               sum=0;
          }
     }
     //Transposed A*B Matrix
     for(i=0; i<r1; i++)
     {
          for(j=0; j<c2; j++)
          {
               transposed[j][i]=c[i][j];
          }
     }
     //sum of upper and lower elements
     for(i=0; i<r1; i++)
     {
          for(j=0; j<c2; j++)
          {
               if(i<j)
               {
                    upperSum=upperSum+transposed[i][j];
               }
               if(i>j)
               {
                    lowerSum=lowerSum+transposed[i][j];
               }
          }
     }
     //printing A matrix
      printf("A Matrix= \n");
     for(i=0; i<r1; i++)
     {    printf("\t");
          for(j=0; j<c1; j++)
          {

               printf("%d ",a[i][j]);
          }
          printf("\n");
     }

     //printing B matrix
      printf("B Matrix= \n");
     for(i=0; i<r2; i++)
     {    printf("\t");
          for(j=0; j<c2; j++)
          {

               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     //printing a*b matrix
     printf("A*B Matrix= \n");
      for(i=0; i<r1; i++)
     {
          printf("\t");
          for(j=0; j<c2; j++)
          {
               printf("%d ",c[i][j]);
          }
          printf("\n");
     }
     //printing Transposed A*B Matrix
     printf("A*B Transposed Matrix= \n");
      for(i=0; i<r1; i++)
     {
          printf("\t");
          for(j=0; j<c2; j++)
          {
               printf("%d ",transposed[i][j]);
          }
          printf("\n");
     }
     printf("Transposed matrix for Upper triangle element sum = %d\n",upperSum);
     printf("Transposed matrix for Lower triangle element sum = %d\n",upperSum);




     return 0;
}
