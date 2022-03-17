#include<stdio.h>
int main()
{
    float a,b,c,P,A;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        P= a+b+c;
        printf("Perimetro = %.1f\n",P);
    }
    else
    {
        A= .5*(a+b)*c;
        printf("Area = %.1f\n",A);

    }


    return 0;
}
