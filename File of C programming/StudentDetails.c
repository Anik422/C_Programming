#include<stdio.h>
int main()
{
     FILE *file;
     char name[20];
     int age,PhoneNumber[10],num,i;

     file= fopen("student.txt","a");
     if(file==NULL)
     {
          printf("File dose not exist.\n");
     }
     else
     {

          printf("File is opened.\n");
          printf("Enter number of student :");
          scanf("%d",&num);
          printf("\n\n");
          for(i=1; i<=num; i++)
          {
               printf("Student Details %d\n",i);
               printf("Enter student name :");
               scanf("%s",&name);

               printf("Enter student age :");
               scanf("%d",&age);

               printf("Enter student Phone Number :");
               scanf("%d",&PhoneNumber);

               fprintf(file ,"\n%s\t\t%d\t%d\n",name,age,PhoneNumber);
               printf("\n\n");
          }
          fclose(file);
     }





     return 0;
}
