///Bipul Islam, B.Sc in EEE, HSTU
///C program to print digit to name
#include<stdio.h>
#define size 12
int main(void)
{
    long int number[size];
    long int temp, a, b, count;
    int value[size];

    printf("Enter the number : ");
    scanf("%ld",&a);
    b=a;
    count=0;
    int i=0;
    do
    {
        temp=a%10;
        a=a/10;
        number[i]=temp;
        value[i]=number[i];
        i++;
        count++;
    }
    while(a!=0);

    int j=0;
    for(i=count-1; i>=0; i--)
    {
        number[j]=value[i];
        j++;
    }
    printf("%ld = ",b);
    for(i=0; i<count; i++)
    {
        switch(number[i])
        {
        case 1:
            printf(" ONE");
            break;
        case 2:
            printf(" TWO");
            break;
        case 3:
            printf(" THREE");
            break;
        case 4:
            printf(" FOUR");
            break;

        case 5:
            printf(" FIVE");
            break;
        case 6:
            printf(" SIX");
            break;
        case 7:
            printf(" SEVEN");
            break;
        case 8:
            printf(" EIGHT");
            break;
        case 9:
            printf(" NINE");
            break;
        case 0:
            printf(" ZERO");
            break;

        }
    }
    return 0;
}
