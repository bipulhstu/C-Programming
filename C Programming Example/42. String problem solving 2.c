///change space by underscore
#include<stdio.h>
#include<string.h>
int main()
{
    char str[300];
    int i, l;
    printf("Enter a sentence : ");
    gets(str);

    l = strlen(str);
    for(i=0; i<l; i++)
    {
        if(str[i]==' ')
            str[i] = '_';
    }
    printf("%s\n",str);
}
