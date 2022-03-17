#include<stdio.h>
int main()
{
     int choice;
     float temp,convertedTemp;
     printf("Temperature conversion menu.\n");
     printf("1. Farenheit to Celsius. \n");
     printf("2. Celsius to Farenheit.\n");
     printf("Enter Your choice:");
     scanf("%d",&choice);

     switch(choice)
     {
          case 1:
               {
                    printf("Enter the fahrenheit temperature :");
                    scanf("%f",&temp);
                    convertedTemp = (temp-32)/1.8;
                    printf("The Temperature in Celsius is : %f\n",convertedTemp);
                         break;

               }
          case 2:
               {
                    printf("Enter the Celsius temperature :");
                    scanf("%f",&temp);
                    convertedTemp = (1.8*temp)+32;
                    printf("The Temperature in fahrenheit : %f\n",convertedTemp);
                         break;

               }

          default:
               printf("Not a correct option.");

     }
     return 0;
}
