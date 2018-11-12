
#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of x is %d\n",x);
    *p=20;
     printf("Value of x is %d\n",x);
      x=15;
      printf("Value of x is %d\n",x);
    printf("Value stored at location %p is %d\n",p,*p);
    printf("Address of p is %p\n",p);

    return 0;
}
