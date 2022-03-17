#include<stdio.h>

void silection_sort(int a[], int x)
{
     int k,l,index_min,temp;
     for(k=0; k<x-1; k++)
     {
          index_min = k;
          for(l=k; l<x; l++)
          {
               if(a[l]<a[index_min])
               {
                    index_min = l;
               }
          }
          if(index_min != k)
          {
               temp = a[k];
               a[k] = a[index_min];
               a[index_min] = temp;
          }
     }
}
int main()
{
     int n;
     printf("Enter array size :");
     scanf("%d",&n);
     int array[n],array_length,i,j;
     for(i=0; i<n; i++)
     {
          printf("Enter number %d value :",i+1);
          scanf("%d",&array[i]);
     }
     array_length = sizeof(array)/sizeof(array[0]);
     silection_sort(array,array_length);
     for(i=0; i<array_length; i++)
     {
          printf("%d index for value : %d\n",i,array[i]);
     }


     return 0;
}
