#include<stdio.h>
void printJK(int a)
{
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<a; k++)
            {
                printf("valu of i: %d , J: %d , K: %d \n",i,j,k);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printJK(n);

    return 0;
}
