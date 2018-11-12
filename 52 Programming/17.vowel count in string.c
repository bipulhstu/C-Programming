#include<stdio.h>
#include<string.h>
int main()
{
    int i, t, j, k;
    char s[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        getchar();
        int count=0;
        scanf(" %[^\n]s",s);
        for(j=0; j<=strlen(s); j++)
        {
           if((s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')||(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
            count++;
        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}
