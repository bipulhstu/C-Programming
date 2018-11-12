#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, n;
    char s[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]s",s);
        int len;
        len=strlen(s);
        for(i=len-1; i>=0; i--)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
