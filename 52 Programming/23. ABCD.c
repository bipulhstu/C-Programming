
#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, n;
    char s[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]s",s);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                printf("%d",s[i]-64);
        }
        printf("\n");

    }
    return 0;
}
