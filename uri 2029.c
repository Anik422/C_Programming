#include<stdio.h>
int main()
{
     float a,b,area,hight;
     while(scanf("%f%f",&a,&b)!=EOF)
     {
         b=b/2;
         area=3.14*b*b;
         hight= a/area;
         printf("ALTURA = %.2f",hight);
         printf("AREA = %.2f",area);
     }


     return 0;
}
