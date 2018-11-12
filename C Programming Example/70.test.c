#include<stdio.h>
#include "70. dimik.h"
int main()
{
    int n1 = 10, n2 = 20;
    printf("%d + %d = %d\n", n1, n2, add(n1,n2));
    printf("%d * %d = %d\n", n1, n2, mul(n1, n2));

    return 0;
}
