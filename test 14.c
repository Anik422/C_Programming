#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int a, int b) {
  //Write your code here.
  int x,y,z;
   x = a&b;
   y = a|b;
   z = a^b;
   printf("%d\n%d\n%d",x,y,z);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

