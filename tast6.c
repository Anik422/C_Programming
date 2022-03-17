#include<stdio.h>
int main()
{
     int a,b;
     printf("Enter the 1st number :");
     scanf("%d",&a);
     printf("Enter the 2nd number :");
     scanf("%d",&b);
     printf("-------------------------\n\n");
     if (a>b)
          {
               printf("The 1st number is Large.(%d)\n\n",a);
               printf("The 2st number is small.(%d)\n\n",b);
          }
     else if(a<b)
          {
               printf("The 2nd number is Large.(%d)\n\n",b);
               printf("The 1st number is small.(%d)\n\n",a);
          }
     else
          printf("The 1st & 2nd number is same.(%d=%d)\n",a,b);


     return 0;
}
