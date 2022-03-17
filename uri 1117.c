#include<stdio.h>
int main()
{

    float n,sum=0,c;

    while(1)
    {

        if(c==2)
        {
             break;
        }
             scanf("%f",&n);

        if(n>=0 && n<=10)
        {
            sum=sum+n;
            c++;
        }
        else
        {
             printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",sum/2.00);


    return 0;
}
