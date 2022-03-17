#include<stdio.h>
int main()
{

    int i, num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("The number is prime.");

        }
        else
        {
            printf("The Number is not prime.");
        }
    }
    else
    {
        printf("Error! Enter the positive number . ");
    }



    return 0;
}
