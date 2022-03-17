#include<stdio.h>
int main()
{
    int a,b,c,d,e,win,sum;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=b+c;
    if((sum%2==0 && a==1)||(sum%2==1 && a==0))
    {
        win =1;
    }
    else
    {
        win=2;
    }
    if((d==1 && e==0)||(d==0 && e==1))
{
    win=1;
}
else if(d==1 && e==1)
{
    win=2;
}
printf("Jogador %d ganha!\n",win);


return 0;
}
