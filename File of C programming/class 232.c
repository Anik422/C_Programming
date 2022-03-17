#include<stdio.h>
int main()
{
    while(1)
    {
     FILE *file;
     char name[20];
     int length= strlen(name);
     file= fopen("test2.txt","a");
     if(file==NULL)
     {
          printf("File doesn't exist.\n");
     }
     else
     {
          printf("File is opened.\n");

          printf("Enter your full name:");
          gets(name);
          fputs(name,file);
          fputs("\n",file);
          printf("File is written successfully .\n");
          fclose(file);
     }

    }



     return 0;
}
