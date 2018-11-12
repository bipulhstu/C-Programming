#include<stdio.h>
#include<string.h>
int main()
{
    int T, i, n;
    char str[51];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str);
        int len;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='L')
                str[i]=str[i-1];
            if(str[i]=='R')
                str[i]=str[i+1];
        }
        printf("%s\n",str);
    }
    return 0;
}
