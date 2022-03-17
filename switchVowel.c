#include<stdio.h>
int main()
{
     char c;
     printf("Enter a letter :");
     scanf("%c",&c);
     switch(c)
     {
          case 'a':
          case 'A':
          case 'e':
          case 'E':
          case 'i':
          case 'I':
          case 'o':
          case 'O':
          case 'u':
          case 'U':
               printf("Vowel.\n");
                    break;
          default:
               printf("consonant.\n");
                         break;



     }


     return 0;
}
