#include<stdio.h>
int main()
{
    char str[100];
    int capital, small, digit, i;
    i = capital = small = digit = 0;

    printf("Please, Enter a String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <=90)
            capital++;
        else if(str[i] >= 97 && str[i] <=122)
            small++;
        else if(str[i] >= 48 && str[i] <=57)
            digit++;
        i++;
    }
    printf("Number of capital letters = %d\n",capital);
    printf("Number of small letters = %d\n",small);
    printf("Number of digits = %d\n",digit);

    return 0;

}
