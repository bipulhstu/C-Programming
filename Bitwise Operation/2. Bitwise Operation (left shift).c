///Bitwise operator left shift
#include<stdio.h>
int main()
{
    int n, x, m;
    while(1)
    {
        printf("Please Enter your number (0 to exit): ");
        scanf("%d", &n);
        if(n == 0)
            break;
        printf("How many bits you want to shift left: ");
        scanf("%d", &x);

        m = n << x;
        printf("%d << %d is %d\n", n, x, m);
    }
    return 0;
}
