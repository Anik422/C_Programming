#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int array[n],i,array_size;
    for (i=0; i<n; i++)
    {
        printf("Please %d index value input :",i);
        scanf("%d",&array[i]);
    }
    array_size = sizeof(array)/sizeof(array[0]);
    bubble_sort(array, array_size);

    for (i=0; i<n; i++)
    {
        printf("%d index in value : %d\n",i,array[i]);
    }
    return 0;
}
