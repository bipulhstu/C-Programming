#include<stdio.h>
int main()
{
    double pi=3.1419435749375;
    int *ptr;
    ptr=&pi;
    printf("Value of pi is %lf\n",pi);
    printf("Value of pi is %lf\n",*ptr);
    return 0;
}
