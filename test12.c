#include <stdio.h>


int main() {
    int a, b,A,B;


    scanf("%d %d", &a, &b);
   A= a+b;
   B=a-b;
   if(B<0)
   {
     B=-B;
   }
   else
   {
        B=B;
   }

    printf("%d\n%d", A, B);

    return 0;
}
