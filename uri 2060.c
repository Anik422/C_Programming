#include<stdio.h>
int main()
{
    int n,coun=0;
    scanf("%d",&n);
    int num[n],i,j,k;
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=2; j<6; j++)
    {
        for(k=0; k<n; k++)
        {
             if(num[k]%j==0)
             {
                  coun++;
             }
        }
       printf("%d Multiplo(s) de %d\n",coun,j);
       coun=0;

    }
   /* printf("%d Multiplo(s) de 2\n",mud_2);
    printf("%d Multiplo(s) de 3\n",mud_3);
    printf("%d Multiplo(s) de 4\n",mud_4);
    printf("%d Multiplo(s) de 5\n",mud_5);
*/

    return 0;
}
