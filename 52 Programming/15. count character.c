#include<stdio.h>
#include<string.h>
int main()
{
    int count[26],t, i, j, num;
    char s[1000];
    scanf("%d",&t);
    while(t--)
    {
        count[26];
        scanf("%s",s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>='a' && s[i]<='z')
                count[s[i]-'a']++;
            else
                count[s[i]-'a']=0;
        }
        for(i=0; i<26; i++)
        {
            if(count[i]!=0)
                printf("%c = %d\n",'a'+i,count[i]);
        }
    }
}
