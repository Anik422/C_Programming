#include<stdio.h>
int main()

{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);

    //1 2 3 4 5....
    for(row=n; row>=1; row--)
    {

        for(col=1; col<=row; col++)
        {
            printf("%d ",col);

        }
        printf("\n");
    }




    //1 1 1 1 1 1....
    //2 2 2 2 2.....
    for(row=n; row>=1; row--)
    {

        for(col=1; col<=row; col++)
        {

            printf("%d ",row);
        }
        printf("\n");
    }
     //1 0 1 0....
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%d ",col%2);
          }
          printf("\n");
     }
     //1 1 1 1....
     //0 0 0 ....
     for(row=n; row>=1; row--)
     {
          for(col=1; col<=row; col++)
          {
               printf("%d ",row%2);
          }
          printf("\n");
     }

    //A B C D E......
    for (row=n; row>=1;  row--)
    {


        for (col=1; col<=row; col++)
        {

            printf("%c ",col+64);
        }
        printf("\n");
    }


    //A A A A A ......
    //B B B B........

    for (row=n; row>=1; row--)
    {
        for (col=1; col<=row; col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }


    //a b c d e .....

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+96);
        }
        printf("\n");
    }


    //a a a a a a ......
    //b b b b b .......
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",row+96);
        }
        printf("\n");
    }

    //# # # # # ....
    //# # # #......
    for(row=n; row>=1; row--)
    {

        for(col=1; col<=row; col++)
        {
            printf("# ");
        }
        printf("\n");
    }
    getch();
}
