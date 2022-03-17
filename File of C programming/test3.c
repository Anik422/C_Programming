#include<stdio.h>
int main()
{
     FILE *file;
     char fname[20];
     char lname[20];
     int age;
     file=fopen("test.txt","w");
     if(file==NULL)
     {
          printf("File dose not exit.\n");

     }
     else{

          printf("File is opened.\n");

          fclose(file);
     }


     return 0;
}
