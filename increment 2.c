#include<stdio.h>
int main()
{
     int x;
     printf("Enter the Number X =");
     scanf("%d",&x);
     printf("Result is \n 1. X \n 2. X+1 \n 3. X+2 \n 4. X+2 \n 5. X+2 \n 6. X \n");

     printf("The Result = %d\n",x++);//x=10
     printf("The Result = %d\n",x); //x=11
     printf("The Result = %d\n",++x);//x=12
     printf("The Result = %d\n",x);//x=12
     printf("The Result = %d\n",x--);//x=12
     printf("The Result = %d\n",--x);//x=10

    return 0;
}
