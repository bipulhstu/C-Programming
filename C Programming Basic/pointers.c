///How to use pointers???
#include<stdio.h>
int main()
{
    int var=20;  ///actual variable declaration
    int *ip;///pointer variable declaration

    ip=&var; /*Store address of var in pointer variable */
    printf("Address of var variable is: %d\n", &var);

    ///address stored in pointer variable
    printf("Address stored in pointer variable is: %d\n", ip);

    ///access the value using the pointer
    printf("Value of *ip variable is: %d\n", *ip);
    return 0;

}
