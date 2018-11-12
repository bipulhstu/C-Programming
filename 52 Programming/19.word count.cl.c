#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, count;
    char s[10000];
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        count=0;
        //scanf(" %[^\n]s",s);
        gets(s);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==' ' && s[i+1]!=' ')
                count++;
        }
        printf("Count = %d\n",count+1);
    }
}
