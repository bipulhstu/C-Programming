#include<stdio.h>
int main()
{
    int i=0,j,r, binary[20],n,decimal;
    printf("Please! Enter a number to find its binary number:\n");
    scanf("%d",&decimal);
    n=decimal;
    while(decimal>0)
    {
        r=decimal%2;
        binary[i]=r;
        decimal=decimal/2;
        i++;
    }
    printf("Binary equivalent of %d is: ",n);
    for(j=i-1; j>=0; j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
