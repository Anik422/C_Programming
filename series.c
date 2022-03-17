//1*3*4+ 2*5*6 + 3*7*8 +........n1*n2*n3
#include<stdio.h>
int main()
{
     int n1,n2,n3,sum=0,a=1,b=3,c=4;
     printf("Enter n1, n2 and n3 =");
     scanf("%d%d%d",&n1,&n2,&n3);
     printf("1*3*4+ 2*5*6 + 3*7*8 +........+%d*%d*%d",n1,n2,n3);
     while(a<=n1 && b<=n2 && c<=n3)
     {
          sum=sum+a*b*c;
          a=a+1;
          b= b+2;
          c= c+2;


     }
     printf("=%d\n",sum);



     getch ();
}
