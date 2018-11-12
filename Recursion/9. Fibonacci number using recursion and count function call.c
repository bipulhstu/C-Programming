///Fibonacci Using Recursion and count function call
///Author : Bipul Islam, EEE
#include<stdio.h>
#include<string.h>
int function_call = 0;
int fibo(int n)
{
    function_call = function_call + 1;
    if(n == 1 || n == 2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    char s[3];
    printf("How many fibonacci numbers: ");
    scanf("%d", &n);
    if(n < 0 )
        printf("Undefined!!\n");

    if(n==1)
        strcpy(s, "st");
    else if(n == 2)
        strcpy(s, "nd");
    else if(n == 3)
        strcpy(s, "rd");
    else
        strcpy(s, "th");

    printf("%d%s fibonacci number is %d\n",n, s, fibo(n));
    printf("Number of function call is %d\n",function_call);
    return 0;
}


