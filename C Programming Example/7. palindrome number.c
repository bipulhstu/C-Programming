///Author Bipul Islam
///Programming Assignment 1.1 Palindrome'
#include<stdio.h>
int main()
{
    int number, temp, reverse=0;
    scanf("%d",&number);

    temp = number;
    while(number!=0)
    {
        reverse = reverse*10;
        reverse = reverse + number%10;
        number = number/10;
    }
    if (temp ==  reverse)
        printf("YES\n");
    else
        printf("NO\n");
}
