
#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    printf("NOTAS:\n");

     printf("%f nota(s) de R$ 100,00\n", n/100.00);

   n %= 100.00;

     printf("%f nota(s) de R$ 50,00\n", n/50.00);

     n %= 50.00;
     printf("%f nota(s) de R$ 20,00\n", n/20.00);

    n %= 20.00;
     printf("%f nota(s) de R$ 10,00\n", n/10.00);

     n %= 10.00;
     printf("%f nota(s) de R$ 5,00\n", n/5.00);

     n %= 5.0;
     printf("%f nota(s) de R$ 2,00\n", n/2.00);

     printf("MOEDAS:\n");


     n %= 2.00;
     printf("%f moeda(s) de R$ 100,00\n", n/1);

     n %= 1.00;
     printf("%f moeda(s) de R$ 50,00\n", n/0.50);

     n %= 0.50;
     printf("%f moeda(s) de R$ 20,00\n", n/0.25);

     n %= 0.25;
     printf("%f moeda(s) de R$ 10,00\n", n/0.10);

     n %= 0.10;
     printf("%f moeda(s) de R$ 5,00\n", n/0.05);

     n %= 0.05;
     printf("%f moeda(s) de R$ 2,00\n", n);






    return 0;
}
