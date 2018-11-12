#include<stdio.h>
int main()
{
    int a;
    int *p;
    p = &a;
    *p = 5;
    printf("%d\n",*p);
    printf("%d\n",a);

    return 0;
}
