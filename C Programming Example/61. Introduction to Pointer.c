///Pointer is a variable that stores/points the address of another variable
#include<stdio.h>
int main()
{
    int x = 5;  ///variable declaration
    int *ptr;  ///pointer declaration
    ptr = &x; ///pointing address of variable x

    ///printing value and address
    printf("Value of x = %d\n",x);
    printf("Address of x = %d\n",&x);
    printf("Address of ptr = %d\n", ptr);
    printf("Value of ptr = %d\n", *ptr);
    printf("Pointer variable address = %d\n", &ptr);

    return 0;
}
