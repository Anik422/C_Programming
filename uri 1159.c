#include<stdio.h>
int main()
{
    int x=0,coun=0,sum=0,i;
    while(1)
    {
        scanf("%d",&x);

        if(x==0)
        {
            break;
        }
        else
        {
            for(i=1; i<=11; i++)
            {
                if(coun==5)
                {
                    printf("%d\n",sum);
                    coun=0;
                    sum=0;
                    x=0;
                    break;
                }
                if(x%2==0)
                {
                    sum=sum+x;
                    x++;
                    coun++;
                }

                else
                {
                    x++;
                }

            }
        }

    }

    return 0;
}
