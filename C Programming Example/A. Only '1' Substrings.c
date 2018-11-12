#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int t, i, len;
    scanf("%d",&t);
    while(t--)
    {
        int count = 0;
        scanf("%s", &str);
        len = strlen(str);
        for(i = 0; i<len; i++)
        {
            if(str[i] == '1')
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
