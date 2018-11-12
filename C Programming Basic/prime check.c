#include<stdio.h>
int check_prime(int);
int main()
{
    int i, n, result;
    printf("Enter the numbers of prime numbers required:");
    scanf("%d", &n);
    printf("First %d numbers are:\n", n);
    for(i=0; i<n; i++)
    {
        result=check_prime(i);
        ///if i is prime then i will return
        if(result==1)
            printf("%d\n", i);
    }

}
int check_prime(int a)
{
    int c;
    ///Starting from 2, if number is divisible by any
    ///number then it is not prime.
    for(c=2; c<=a-1; c++)
    {
        if (a%c==0)
            return 0;
    }
    if(c==a)
        return 1;
}
