#include<stdio.h>
int main()
{
    int GCD, LCM, a, b, x, y, r;
    printf("Please enter two number: ");
    scanf("%d%d",&x, &y);
    a=x;
    b=y;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    GCD=a;
    LCM=(x*y)/GCD;
    printf("Greatest common divisor of %d and %d is %d\n",x,y,GCD);
    printf("Least common multiple of %d and %d is %d\n",x,y,LCM);
    return 0;
}
