///find palindrome of a number
#include<stdio.h>
int main()
{
    int num, reverse=0, temp;
    printf("Enter a number to check it is palindrome or not.\n");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num=num/10;
    }
    if (reverse==temp)
    printf("%d is a palindrome number.\n", temp);
    else
        printf("%d is not a palindrome number.\n", temp);

    return 0;
}

