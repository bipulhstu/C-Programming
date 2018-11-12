///How to input single word, single line or multiple line
///or How to use scanf, \0, \n and gets for input string
#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    printf("%s\n",ch);   /// input multiple word but print one word
    //scanf("%[^\n]",ch);
    //printf("%s\n",ch); ///input multiple word and also print multiple word
    gets(ch);           ///input and output multiple line
    printf("%s\n",ch);

}
