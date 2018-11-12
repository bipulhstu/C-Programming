#include<stdio.h>
int main()
{
    char str1[] = "Hi, this is Biplob";
    char str2[] = "Nice to meet you";
    char str3[50];
    int i, j, len;
    i = j = len = 0;

    ///Reverse the String without strrev() function
    ///length of the second string
    while(str2[i] != '\0')
    {
        i++;
        len++;
    }
    ///Reverse the String
    for(i = len - 1, j = 0; i>=0; i--, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("Reverse string = %s\n",str3);

    int d = strcmp(str2, str3);;
    if(d == 0)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}

