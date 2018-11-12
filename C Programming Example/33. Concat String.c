#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = "Bipul ";
    char str2[100] = "Islam";
    char str3[100] = "My name is ";
    char str4[100] = "Bipul Islam";
    int i , j, len;
    i = j = len = 0;

    ///concat string using concat() function
    strcat(str1, str2);
    printf("str1 = %s\n",str1);

    ///concat string without concat() function
    ///length of first string
    while(str3[i] != '\0')
    {
        i++;
        len++;
    }
    ///concat string
    while(str4[j] != '0')
    {
        str3[len+j] = str4[j];
        j++;
    }
    printf("str3 = %s\n",str3);


    return 0;

}
