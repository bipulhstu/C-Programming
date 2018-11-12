#include<stdio.h>
#include<math.h>
int main()
{
    int T, i, n, a, b, c;
    double s, area;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
        {
        s=(double)(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %.3lf\n",area);
        }
        else
            break;
    }
    return 0;
}
