#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    while(1){
     printf("Please, Enter string: \n");
     int len, i;
     scanf("%s", &str);
     len = strlen(str);
     for(i=0; i<len; i++)
    {
        str[i] = tolower(str[i]);
       if(str[i] == '.')
        str[i] = ' ';
    }
    for(i=0; i<len; i++)
    {

        if(str[i] == ' ')
        str[i+1] = toupper(str[i+1]);
    }
    str[0] = toupper(str[0]);

    printf("%s\n",str);
    }
    return 0;
}
