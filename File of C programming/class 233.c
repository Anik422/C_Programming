#include<stdio.h>
int main()
{
        char name[26];
     int age,i;
    int length= strlen(name);

     FILE *file;
     file= fopen("test.txt","a");
     if(file==NULL)
     {
          printf("File  doesn't exist.\n");
     }
     else
     {
          printf("File is opened.\n");
          printf("Enter Your full name :");
          gets(name);
          printf("Enter your age :");
          scanf("%d",&age);
          fprintf(file,"Name = %s Age = %d\n",name,age);
          printf("File is written successfully.\n");
          fclose(file);
     }




     return 0;
}
