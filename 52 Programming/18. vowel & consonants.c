#include<stdio.h>
int main()
{
    int i,j, t;
    char s[10001];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]s",s);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                printf("%c",s[i]);
        }
        printf("\n");
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!=' ')
                printf("%c",s[j]);
        }

        printf("\n");



    }
}
