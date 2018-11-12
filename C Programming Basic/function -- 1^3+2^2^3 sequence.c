///Bipul Islam, B.Sc in EEE, HSTU
#include<stdio.h>
long int sum(int n)
{
    if(n==1)
       return 1;
    else
        return (n*n*n+sum(n-1));
}
int main(void)
{
    long int a, result;
    printf("Enter a number : \n");
    scanf("%ld",&a);
    result=sum(a);
    printf("Result = %ld\n",result);

    return 0;
}
