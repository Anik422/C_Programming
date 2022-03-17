#include<stdio.h>
int main()
{

     int a,b,c;
     printf("Enter the three number : ");
     scanf("%d %d %d",&a,&b,&c);

     if(a>=b && a>=c)
          printf("Large Number = %d\n",a);
     else if (b>=a && b>=c)
          printf("large number = %d\n",b);
     else if(c>=a&& c>=b)
          printf("Large number = %d\n",c);
     else
          printf("All Number is same");


     return 0;
}
