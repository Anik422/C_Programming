#include<stdio.h>
int main()
{
     int a[3][4],j,i, b[3][4];
     printf("Enter elements for A matrix.\n");
    //scanning A matrix
     for(i=0; i<3; i++)
     {
        for(j=0; j<4; j++)
        {
             printf("a[%d][%d]=",i,j);
             scanf("%d",&a[i][j]);
        }
        printf("\n");
     }
     //print A matrix
     printf("A= ");
     for(i=0; i<3; i++)
     {
          printf("\t");

          for(j=0; j<4; j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     //scanning B matrix
     printf("\n\n Enter elements for B matrix.\n");
     for(i=0; i<3; i++)
     {
        for(j=0; j<4; j++)
        {
             printf("a[%d][%d]=",i,j);
             scanf("%d",&b[i][j]);
        }
        printf("\n");
     }
     //print B matrix
     printf("B= ");
     for(i=0; i<3; i++)
     {
          printf("\t");
          for(j=0; j<4; j++)
          {
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }

     return 0;
}
