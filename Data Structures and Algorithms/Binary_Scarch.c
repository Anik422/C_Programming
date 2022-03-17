#include<stdio.h>
int main()
{
    int n,first,last,mid,i,value;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d integers.\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter value to find =");
    scanf("%d",&value);

    first=0;
    last=n-1;

    while(first<=last)
    {
        mid=(first+last)/2;
        if(num[mid]==value)
        {
            printf("%d found at location %d.\n", value, mid+1);
            break;
        }
        else if(num[mid]<value)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(first>last)
    {
        printf("Not found! %d isn't present in the list.\n", value);
    }
    return 0;
}
