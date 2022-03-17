#include<stdio.h>
int main()
{
    int a,b,x,i;
    int ara[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==12 && b==25)
        {
            printf("E natal!\n");
        }
        else if(a==12 && b>25)
        {
            printf("Ja passou!\n");
        }
        else if(a==12 && b==24)
        {
            printf("E vespera de natal!\n");
        }
        else
        {
             x=ara[a-1]-b;
             for(i=a; i<12; i++)
             {
                  x+=ara[i];
             }
             printf("Faltam %d dias para o natal!\n",x);
        }
    }


    return 0;
}
