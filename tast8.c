#include<stdio.h>
int main()
{
     char c;
     printf("Enter a Letter :");
     scanf("%c",&c);
     if(c>='A' && c<='Z')
          printf("The letter is capital.(%c)\n",c);
     else if(c>='a' && c<='z')
          printf("The letter is smell. (%c)\n",c);
     else
          printf("Not a letter. (%c)\n",c);

     return 0;
}
