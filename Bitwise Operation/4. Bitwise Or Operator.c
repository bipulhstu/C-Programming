///Bitwise Or |/^ Operator
#include<stdio.h>
int main()
{
    int n1, n2, n3, i = 0;
    while(i<5)
    {
        printf("Please Enter the value of n1: ");
        scanf("%d",&n1);
        printf("Please Enter the value of n2: ");
        scanf("%d", &n2);

        n3 = n1 ^ n2;
        printf("%d ^ %d is %d\n", n1, n2, n3);
        i++;
    }
    return 0;
}


