#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="HackerRank ";
    char c[100];
    scanf("%[^\n]", c);
    strcat(ch, c);

    printf("%s\n",ch);
    return 0;
}
