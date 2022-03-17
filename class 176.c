#include<stdio.h>
int main()
{
     int sum=0,fist[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;
     printf("Enter Rows and Column for fist matrix =");
     scanf("%d%d",&r1,&c1);
     printf("Enter Rows and Column for Second matrix =");
     scanf("%d%d",&r2,&c2);

     while(c1!=r2)
     {
          printf("Error !! Column of fist matrix not equal to row of second\n ");
          printf("Enter Rows and Column for fist matrix =");
          scanf("%d%d",&r1,&c1);

          printf("Enter Rows and Column for Second matrix =");
          scanf("%d%d",&r2,&c2);
     }
     //scanning fist matrix
     printf("Enter Fist Matrix.\n");
     for(i=0; i<r1; i++)
     {
          for(j=0; j<c1; j++)
          {
               printf("Fist[%d][%d] = ",i,j);
               scanf("%d",&fist[i][j]);
          }
          printf("\n");
     }
     //scanning Second matrix
     printf("Enter Second matrix.\n");
     for(i=0; i<r2; i++)
     {
          for(j=0; j<c2; j++)
          {
               printf("Second[%d][%d] = ",i,j);
               scanf("%d",&second[i][j]);
          }
          printf("\n");
     }
     //multiplying matrix
     for(i=0; i<r1; i++)
     {
          for(j=0; j<c2; j++)
          {
               for(k=0; k<c1; k++)
               {
                    sum=sum+fist[i][k]*second[k][j];
               }
               result[i][j]=sum;
               sum=0;
          }
     }
     //printing fist matrix
     printf("Fist Matrix.\n");
     for(i=0; i<r1; i++)
     {
          printf("\t");
          for(j=0; j<c1; j++)
          {
               printf("%d ",fist[i][j]);

          }

          printf("\n");

     }
     //printing second matrix
     printf("Scond Matrix.\n");

     for(i=0; i<r2; i++)
     {
          printf("\t");
          for(j=0; j<c2; j++)
          {
               printf("%d ",second[i][j]);
          }
          printf("\n");
     }
     //printing result matrix
     printf("Fist and second matrix multiply result.\n");
       for(i=0; i<r1; i++)
     {
          printf("\t");
          for(j=0; j<c2; j++)
          {
               printf("%d ",result[i][j]);
          }
          printf("\n");
     }
     return 0;
}
