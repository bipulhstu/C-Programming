///Bipul Islam, B.Sc in EEE, HSTU
///C program to find the first digit of fractional part
#include<stdio.h>
void fraction()
{
    int n, d, c;
    float f;
    printf("Enter the numerator: ");
    scanf("%d",&n);
    printf("Ente the denominator: ");
    scanf("%d",&d);
    f=(float)n/d;
    c=(int)f;
    f=f-c;
    f=f*10;
    c=(int)f;
    printf("The first digit of fractional part is %d\n",c);
}
int main(void)
{
    fraction();

    return 0;
}
