///সংখ্যা গণনা
#include<stdio.h>
#include<string.h>
int count_number(char str[]);
int main()
{
    int count, T;
    char str[100];
    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", str);
        count=count_number(str);
        printf("%d\n", count);
    }
    return 0;
}
int count_number(char str[])
{
    int count, i, len;
    count=0;
    len=strlen(str);
    for(i=0; i<len; )
    {
        if(str[i]==' '){
        while(str[i]==' ')
        {
            i++;
        }
            count++;
        }
        else
            i++;
    }
    return count+1;
}

