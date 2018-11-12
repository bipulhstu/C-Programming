///find reverse of a number
#include<stdio.h>
int main()
{
    int num, reverse=0;
    printf("Enter a number to find reverse.\n");
    scanf("%d", &num);
    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num=num/10;
    }
    printf("The reverse number is %d.\n", reverse);

    return 0;
}
