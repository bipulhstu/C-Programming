#include<stdio.h>
int main()
{
    char s1[] = "Bipul Islam";
    int len1 , len2 , i , j;
    i = j = len1 = len2 = 0;

    ///Finding length of the String using strlen() function
    len1 = strlen(s1);

    ///Finding length of the String without strlen() function
    while(s1[i] != '\0')
    {
        i++;
        len2++;
    }
    printf("Length of the String using strlen() function is %d\n",len1);
    printf("Length of the String without strlen() function is %d\n",len2);
}
