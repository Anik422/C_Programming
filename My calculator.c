#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "You will do that operation. Press this key from the keyboard"

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void Calculator_operations();



int main()
{
    char Calc_oprn;
    Calculator_operations();
    while(1)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();
//        printf(Calc_oprn);



        switch(Calc_oprn)
        {
        case '+':
        case 'A':
        case 'a':
            addition();
            break;
        case '-':
        case 'S':
        case 's':
            subtraction();
            break;
        case '*':
        case 'M':
        case 'm':
            multiplication();
            break;
        case '/':
        case 'D':
        case 'd':
            division();
            break;
        case '^':
        case 'P':
        case 'p':
            power();
            break;
        case '!':
        case 'F':
        case 'f':
            factorial();
            break;
            case '?':
        case '%':

            modulus();
            break;

        case 'c':
        case 'C':
            system("cls");
            Calculator_operations();
            break;
        case 'Q':
        case 'q':
            exit(0);
            break;
        default :
            system("cls");
            printf("\n**********You have entered unavailable option**********\n");
            printf("\n*****Please Enter any one of below available options****\n");
            Calculator_operations();
            break;

        }

    }

}
void Calculator_operations()
{

    printf("\n\t\tWelcome to C calculator \n\n");
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("\tEnter '+' or 'A' symbol for Addition \n");
    printf("\tEnter '-' or 'S' symbol for Subtraction \n");
    printf("\tEnter '*' or 'M' symbol for Multiplication \n");
    printf("\tEnter '/' or 'D' symbol for Division \n");
    printf("\tEnter '?' or '%%' symbol for Modulus\n");
    printf("\tEnter '^' or 'p' symbol for Power \n");
    printf("\tEnter '!' or 'F' symbol for Factorial \n\n");


}
void addition()
{
    printf("\n\n \tIf you want to add integers.\n press 'N' or 'n' from the keyboard and press Enter.\n Otherwise, if you want to add a fractional number\n press 'F' or 'f' from the keyboard and press Enter.\n");
    char ch;
    scanf("%c",&ch);
    //integer number add.
    if(ch=='n' || ch=='N')
    {
        int i=0, n,num,sum=0;
        printf("\nEnter the number of elements you want to add:");
        scanf("%d",&n);
        while(i<n)
        {
            scanf("%d",&num);
            sum=sum+num;
            i+=1;

        }
        printf("Sum of %d numbers = %d",n,sum);
    }
    //float number add.
    else if(ch=='F' || ch=='f')
    {
        float i=0, n,num,sum=0;
        printf("\n\tEnter the number of elements you want to add:");
        scanf("%f",&n);
        while(i<n)
        {
            scanf("%f",&num);
            sum=sum+num;
            i+=1;

        }
        printf("Sum of %.0f numbers = %.2f",n,sum);
    }
    else
    {
        system("cls");
        Calculator_operations();
        addition();
    }

}
void subtraction()
{
    printf("\n\n \tIf you want to subtraction integers.\n press 'N' or 'n' from the keyboard and press Enter.\n Otherwise, if you want to subtraction a fractional number\n press 'F' or 'f' from the keyboard and press Enter.\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='N' || ch=='n')
    {
        int a,b;
        printf("Enter 1st number :");
        scanf("%d",&a);
        printf("Enter 2nd number :");
        scanf("%d",&b);
        printf("%d - %d = %d\n",a,b,a-b);
    }
    else if(ch=='F' || ch=='f')
    {
        float a,b;
        printf("Enter 1st number :");
        scanf("%f",&a);
        printf("Enter 2nd number :");
        scanf("%f",&b);
        printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    }
    else
    {
        system("cls");
        Calculator_operations();
        subtraction();
    }

}
void multiplication()
{
    printf("\n\n \tIf you want to multiplication integers.\n press 'N' or 'n' from the keyboard and press Enter.\n Otherwise, if you want to multiplication a fractional number\n press 'F' or 'f' from the keyboard and press Enter.\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='N' || ch=='n')
    {
        int a,b;
        printf("Enter 1st number :");
        scanf("%d",&a);
        printf("Enter 2nd number :");
        scanf("%d",&b);
        printf("%d * %d = %d\n",a,b,a*b);
    }
    else if(ch=='F' || ch=='f')
    {
        float a,b;
        printf("Enter 1st number :");
        scanf("%f",&a);
        printf("Enter 2nd number :");
        scanf("%f",&b);
        printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    }
    else
    {
        system("cls");
        Calculator_operations();
        multiplication();
    }

}
void division()
{
    printf("\n\n \tIf you want to division integers.\n press 'N' or 'n' from the keyboard and press Enter.\n Otherwise, if you want to division a fractional number\n press 'F' or 'f' from the keyboard and press Enter.\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='N' || ch=='n')
    {
        int a,b;
        printf("Enter 1st number :");
        scanf("%d",&a);
        printf("Enter 2nd number :");
        scanf("%d",&b);
        printf("%d * %d = %.2f\n",a,b,(float)a/b);
    }
    else if(ch=='F' || ch=='f')
    {
        float a,b;
        printf("Enter 1st number :");
        scanf("%f",&a);
        printf("Enter 2nd number :");
        scanf("%f",&b);
        printf("%.2f / %.2f = %.2f\n",a,b,a/b);
    }
    else
    {
        system("cls");
        Calculator_operations();
        division();
    }


}
void modulus()
{

     int n,m,r;
     printf("\nPlease enter first number   : ");
     scanf("%d",&n);
     printf("Please enter second number  : ");
     scanf("%d",&m);
     r = n%m;
    printf("\nModulus of entered numbers = %d\n",r);


}
void power()
{
    printf("\n\n \tIf you want to power integers.\n press 'N' or 'n' from the keyboard and press Enter.\n Otherwise, if you want to power a fractional number\n press 'F' or 'f' from the keyboard and press Enter.\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='N' || ch=='n')
    {
        float n,p,r;
        printf("\nEnter two numbers to find the power \n");
        printf("Number :");
        scanf("%f",&n);
        printf("Power Number :");
        scanf("%f",&p);
        r = pow(n,p);
        printf("%.0f to the power %.0f = %.0f",n,p,r);
    }
    else if(ch=='F' || ch=='f')
    {
        double num,powe,result;
        printf("\nEnter two numbers to find the power \n");
        printf("Number :");
        scanf("%lf",&num);
        printf("Power Number :");
        scanf("%lf",&powe);
        result=pow(num,powe);
        printf("%lf to the power %lf = %lf",num,powe,result);
    }
    else
    {
        system("cls");
        Calculator_operations();
        power();
    }


}
int factorial()
{
    int i,num,fact=1;
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\nPlease enter a positive number to\n");
        printf("find factorial and try again. \n");
        printf("Factorial can't be found for negative\n");
        printf("values. It can be only positive or 0  \n");
        factorial();
    }
    else
    {
        for(i=1; i<=num; i++)
        {
            fact=fact*i;
        }
        printf("Factorial of entered number %d is = %d\n",num,fact);
    }

      return 0;
}
