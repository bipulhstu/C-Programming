///Factorial Using Recursion and count function call
///Author : Bipul Islam, EEE
#include<stdio.h>
int function_call = 0;
int factorial(int n)
{
    function_call = function_call + 1;
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
    printf("Number of function call is %d\n",function_call);
    return 0;
}

