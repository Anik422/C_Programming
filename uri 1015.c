#include<stdio.h>
#include<math.h>
int main()
{
     double x1,x2,y1,y2,X,Y,Z;
     scanf("%lf %lf",&x1,&y1);
     scanf("%lf %lf",&x2,&y2);

     X = x2-x1;
     Y = y2-y1;
     Z = sqrt(pow(X,2)+pow(Y,2));
     printf(" %.4lf\n",Z);


     return 0;
}
