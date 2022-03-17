#include<stdio.h>
int number_of_sum(int x, int y)
{
    return x+y;
}
int number_of_sub(int x, int y)
{
    return x-y;
}
int number_of_mul(int x, int y)
{
    return x*y;
}
int number_of_div(int x, int y)
{
    return x/y;
}
int main()
{
    int a,b,result1,result2,result3,result4,result5;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);

    result1 = number_of_sum(a,b);
          printf("The result is sum :%d\n",result1);
    result2 = number_of_sub(a,b);
          printf("The result is sub :%d\n",result2);
    result3 = number_of_mul(a,b);
          printf("The result is mul :%d\n",result3);
    result4 = number_of_div(a,b);
          printf("The result is div :%d\n",result4);
    result5 = number_of_sum(result1, result2);
          printf("result 1 and result 2 sum is %d\n",result5);

    return 0;
}
