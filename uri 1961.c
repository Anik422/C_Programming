#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,k=0, sub,abs_sub;
    scanf("%d%d",&a,&b);
    int n[b];
    for(i=0; i<b; i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0; j<b; j++)
    {
        if(j==b-1)
        {
            break;
        }
        else
        {
            sub=n[j]- n[j+1];
            abs_sub= abs(sub);
            if(abs_sub>a)
            {
                k++;
                break;
            }
            else sub=0;
        }
    }
    if(k==1)
    {

        printf("GAME OVER\n");
    }
    else
    {
        printf("YOU WIN\n");

    }

    return 0;
}
