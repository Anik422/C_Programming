#include<stdio.h>
int main()
{
    int a;
    printf("n = ");
    scanf("%d",&a);
    isPowerOfTwo(a);


}

void isPowerOfTwo(int n){
    int i,sum,j=0;
    for(i=0; i<n; i++)
    {
        sum=pow(2,i);
        if(n==sum)
        {
           j++;
            break;
        }
    }
    if(j==1)
    {
        printf(" true\n");
    }
    else
    {
        printf(" false\n");
    }

}
