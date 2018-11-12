///sizeof() operator
#include<stdio.h>
int main()
{
    int i;
    double d;
    char ch;
    float f;

    printf("%lu\n", sizeof(int));
    printf("Size of integer is: %d\n",sizeof(i));
    printf("Size of double  is: %d\n",sizeof(d));
    printf("Size of character is: %d\n",sizeof(ch));
    printf("Size of float is: %d\n",sizeof(f));

    return 0;
}
