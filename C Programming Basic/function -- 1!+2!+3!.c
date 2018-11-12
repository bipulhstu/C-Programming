///Bipul Islam, B.Sc in EEE, HSTU
#include<stdio.h>
#include<conio.h>
long int fact(int m)
{
    if(m==1)
        return 1;
    else
        return m*fact(m-1);
}
int main(void)
{
    int n, i;
    long int sum;
    sum=0;
    printf("Enter the value of n to determine the sum of\n");
    printf("1! + 2! + 3! series : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        sum=sum+fact(i);
    printf("Sum from 1! up to %d! is = %ld\n",n, sum);

    return 0;
}
