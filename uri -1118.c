#include<stdio.h>
int main()
{
    double num,sum=0,rem,c;
    int a;

    while(1)
    {
        scanf("%lf",&num);
        if(num==2)
        {
            break;
        }
        if(num<=0.0 || num>10.0)
        {
            printf("nota invalida\n");
        }
        if(num>=0.0 && num<=10)
        {
            sum=sum+num;
            rem++;
        }
        if(rem==2)
        {
            printf("media = %.2lf",sum/2);
            rem=0;
            sum=0;
        }


           // printf("novo calculo (1-sim 2-nao)\n");

    }



}



