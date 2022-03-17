#include<stdio.h>
int fact(n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    printf("****Any number Factoridal program****\n\n");
    printf("Do you want to run this program? (Y/N)\n");
    char c;


    printf("          ");
    scanf("%c",&c);
    if(c==89  || c==121)
    {
        int num;
        printf("\tEnter any number :");
        scanf("%d",&num);
        printf("\n");
        int result = fact(num);
        printf("\tFactorial of %d = %d\n\n",num,result);

    }
    else
     printf("\n");

    return 0;
}
