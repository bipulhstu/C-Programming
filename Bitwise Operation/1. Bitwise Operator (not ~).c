#include<stdio.h>
int main()
{
    int a, b;
    a = 0;  ///0
    b = ~a; ///-1 by 2's complement
    printf("a = %d and b = %d\n",a ,b);

    a = 1;   ///1
    b = ~a; ///-2 by 2's complement
    printf("a = %d and b = %d\n", a , b);

    return 0;
}
