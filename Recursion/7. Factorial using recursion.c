///Factorial Using Recursion
///Author : Bipul Islam, EEE
#include<stdio.h>
int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int num;
    printf("Please Enter a number to find factorial: ");
    scanf("%d", &num);
    if(num < 0 )
        printf("Undefined!!\n");

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
