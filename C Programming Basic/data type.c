#include<stdio.h>
int main()
{
    int i;
    long int j;
    long long int k;
    char ch;
    float b;
    double c;
    scanf("%d %ld %lld %c %f %lf", &i,&j,&k,&ch,&b,&c);
    printf("%d\n%ld\n%lld\n%c\n%0.3f\n%0.9lf\n",i,j,k,ch,b,c);

    return 0;
}
