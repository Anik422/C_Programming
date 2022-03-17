#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    if((a+b)<=c || (a+c)<=b || (b+c)<=a)
    {
        printf("Invalido\n");
    }
    else
    {
        if(a==b || b==c || a==c)
        {
            printf("Valido-Isoceles\n");
            printf("Retangulo: N\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
            printf("Retangulo: S\n");
        }
    }



    return 0;
}
