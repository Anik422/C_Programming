#include<stdio.h>
//use function for binary search
int binary_search(int A[], int n, int x)
{
     int first, lest,middle;//defined variable
     first = 0; //defined first variable value
     lest = n-1; // define lest variable value array length -1
     while (first<= lest) //while loop check condition
     {
          middle = (first + lest )/2; //middle variable defined value
          if(A[middle]== x) // check condition
          {
               return middle; // return value
          }
          if(A[middle]<x)
          {
               first = middle + 1;//first variable new value defined
          }
          else
          {
               lest = lest - 1; // lest variable new value defined
          }
     }
     return -1;//default value return
}
// main function
int main()
{
     int num,i;
     //input array size
     printf("Enter array size :");
     scanf("%d",&num);
     int arry[num],len,search_element,result;
     //input array elements
     for(i=0; i<num; i++)
     {
          printf("Enter %d index element input :",i);//print array index number
          scanf("%d",&arry[i]);
     }
     //search element input
     printf("Enter Search element input :");
     scanf("%d",&search_element);
     //array size diagnosis
     len = sizeof(arry)/sizeof(arry[0]);
     //binary search function call
     result = binary_search(arry,len,search_element);
     //binary search function result condition check
     if ( result != -1 )
     {
          printf("Element is present at index = %d",result); // print binary search result
     }
     else
     {
          printf("Element is not present at array = %d",search_element);//binary search not find element print
     }

     return 0;
}
