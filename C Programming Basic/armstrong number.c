#include<stdio.h>
#include<math.h>
int main()
{
    int i=1, n, sum=0, temp, remainder;
    printf("Enter a number to check it is armstrong or not:");
    scanf("%d", &n);
    temp=n;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+remainder*remainder*remainder;
        temp=temp/10;
    }
    if(sum==n)
        printf("%d is a armstrong number.", n);
    else
        printf("%d is not a armstrong number.",n);
}
