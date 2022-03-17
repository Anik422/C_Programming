#include<stdio.h>
struct book{

   char name[20];
   int price;
};
int main()
{
     typedef struct book BOOK;
     BOOK b={"Amer JIbon kotha",50};
     printf("Book name = %s\n",b.name);
     printf("Book Price = %d\n",b.price);
     return 0;
}
