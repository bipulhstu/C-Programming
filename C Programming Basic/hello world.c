#include<stdio.h>
#include<string.h>
int main()
{
    char ch[105];
    scanf("%[^\n]",ch);
    printf("Hello, World.\n");
    printf("%s\n", ch);
    return 0;
}
