

#include<stdio.h>
int main()
{

 float n,sum=0;
 int i,count=0;


 for (i = 1; i <= 6; i++)
 {
  scanf("%f", &n);
  if(n > 0){

   sum=sum+n;
   count++;

  }

 }
 float avr=sum/count;

 printf("%d valores positivosn\n", count);
 printf("%.1f\n",avr);

 return 0;
}

