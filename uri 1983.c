#include<stdio.h>
int main()
{
    int student;
    scanf("%d",&student);
    int student_number[student],i,print_count;
    double student_project[student],max_pro = 0.0;
    for(i=0; i<student; i++)
    {
         scanf("%d %lf",&student_number[i],&student_project[i]);
    }
    for(i=0; i<student; i++)
    {
         if(student_project[i]>max_pro)
         {
              max_pro = student_project[i];
              print_count = i;
         }
    }
    if(max_pro<8)
    {
         printf("Minimum note not reached\n");
    }
    else
    {
         printf("%d\n",student_number[print_count]);
    }
    return 0;
}
