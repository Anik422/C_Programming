#include<stdio.h>
int main()
{
    double x,y;
    scanf("%f %f",&x,&y);
    if (X + Y == 0)printf("Origem\n");

    else if (X == 0)printf("Eixo Y\n");

    else if (Y == 0)printf("Eixo X\n");

    else if(x>0 && y>0)printf("Q1\n");

    else if(x>0 && y<0)printf("Q4\n");

    else if(x<0 && y>0)printf("Q2\n");

    else if(x<0 && y<0)printf("Q3\n");

    return 0;
}
