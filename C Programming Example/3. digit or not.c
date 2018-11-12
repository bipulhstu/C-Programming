#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a character: ");
    ch = getchar();

    if(ch>= 48 && ch<=57)
      printf("%c is a digit\n",ch);
    else
        printf("%c is not a digit\n",ch);
}
