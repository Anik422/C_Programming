#include<stdio.h>
#include<math.h>
int BinarySearch(int array[], int SizeOfArray, int FindNumber)
{
     int First,Lest,Middle;
     First =0;
     Lest = SizeOfArray-1;
     while(First<=Lest)
     {
          Middle = (First + Lest) / 2;
          if(array[Middle] == FindNumber)
          {
               return Middle;
          }
          if(array[Middle] < FindNumber)
          {
               First = Middle + 1;
          }
          else
          {
               Lest = Middle - 1;
          }
     }
     return -1;
}
int main()
{

     int ArraySize,SearchNumber,result;
     printf("Enter array size :");
     scanf("%d",&ArraySize);
     int NumberList[ArraySize],i;
     for(i=0; i<ArraySize; i++)
     {
          NumberList[i]= i*i;
          //printf("Element #%2d : ",i+1);
          //scanf("%d",&NumberList[i]);
     }
     for(i=0; i<ArraySize; i++)
     {

          printf("Element #%2d : %d\n",i+1,NumberList[i]);
          //scanf("%d",&NumberList[i]);
     }
     printf("\nElement to be searched :");
     scanf("%d",&SearchNumber);
     result = BinarySearch(NumberList,ArraySize,SearchNumber);
     if(result != -1)
     {
          printf("%d found at = %d\n",SearchNumber,result+1);
     }
     else
     {
          printf("%d is not in the lest.\n",SearchNumber);
     }
     return 0;
}
