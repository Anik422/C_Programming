
#include<stdio.h>
int main()
{
     char str[100],ch;
     int i,vowel,consonant,word,digit,other;

     printf("Enter a string :");
     gets(str);
     i=vowel=consonant=word=other=digit=0;
     while((ch=str[i])!='\0')
     {

               if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                  ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
               {
                   vowel++;
               }
               else if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
               {
                    consonant++;
               }
               else if(ch>='0' && ch<='9')
               {
                    digit++;
               }
               else if(ch==' ')
               {
                    word++;
               }
               else
               {
                    other++;
               }



          i++;
     }
     word++;
     printf("Number Of vowel = %d\n",vowel);
     printf("Number Of consonant = %d\n",consonant);
     printf("Number Of digit = %d\n",digit);
     printf("Number Of word = %d\n",word);
     printf("Number Of other = %d\n",other);

     return 0;
}
