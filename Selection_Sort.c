#include<stdio.h>
//selection sort function
void selection_sort(int A[], int n)
{
    int i,j,index_min,temp;
    for(i=0; i<n-1; i++) //for loop
    {
        index_min = i;
        for(j=i+1; j<n; j++) //nested for loop
        {
            if(A[j]<A[index_min]) //condition check
            {
                index_min = j;
            }

        }
        if(index_min != i) //index swiping
        {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}
int main()
{
    int num,array_length;
    printf("Enter size of array :");
    scanf("%d",&num); //array size input
    int array[num],i;
    printf("\n");
    //array user input
    for (i=0; i<num; i++)
    {
        printf("Element number %d :",i+1);
        scanf("%d",&array[i]);
    }
    array_length = sizeof(array)/sizeof(array[0]); //array size diagnosis
    selection_sort(array,array_length); //function call
    //selection sort array print
    for(i=0; i<array_length; i++)
    {
        printf("%d\n",array[i]);
    }




    return 0;
}
