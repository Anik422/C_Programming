#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     char ch,s[20],sen[100],t;
    scanf("%c",&ch);

    scanf("%s",s);

    scanf("%c",&t);

    scanf("%[^\n]",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
